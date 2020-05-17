#include "TimedStatemachineInterface.h"
#include "CPPTimerinterface.h"
#include <algorithm>

// the following assumes a timer with a null state machine handle is not valid
static bool is_valid(TimerTask const& timer)
{
    return timer.getHandle() != nullptr;
}

/*!
    This function will be called for each time event that is relevant for a state when a state will be entered.
    \param evid An unique identifier of the event.
    \time_ms The time in milli seconds
    \periodic Indicates the the time event must be raised periodically until the timer is unset
*/
void CPPTimerInterface::setTimer( TimedStatemachineInterface* statemachine,
        sc_eventid event,
        sc_integer time,
        sc_boolean isPeriodic )
{
    auto const it = std::find_if(
        tasks,
        tasks + MAX_TIMER,
        [] (TimerTask const& t) { return !is_valid(t); }
    );
    if (it != tasks + MAX_TIMER) {
        *it = TimerTask{statemachine, event, time, isPeriodic};
    } else{
        // no free slots (abort?)
    }
}

/*!
    This function will be called for each time event that is relevant for a state when a state will be left.
    \param evid An unique identifier of the event.
*/
void CPPTimerInterface::unsetTimer(TimedStatemachineInterface* statemachine,
        sc_eventid event)
{
    auto const it = std::find_if(
        tasks,
        tasks + MAX_TIMER,
        [=] (TimerTask const& t) { return is_valid(t) && t.getPtEvid() == event; }
    );
    if (it != tasks + MAX_TIMER) {
        *it = TimerTask{};
    }
}


/*!
    This function must be called by the user. The elapsed time must be calculated every time, the function gets
    gets called.
 */
void CPPTimerInterface::updateActiveTimer(TimedStatemachineInterface* statemachine,
        long elapsed_ms)
{
    for (auto& task : tasks) {
        if (is_valid(task))
        {
            task.updateElapsedTimeMs(elapsed_ms);

            /* raise Time Event if the timer has proceed */
            if (task.getElapsedTimeMs() >= task.getTimeMs())
            {
                // assert(statemachine == task.getHandle());
                /* raise time event */
                statemachine->raiseTimeEvent(task.getPtEvid());

                /* update periodic timer */
                if (task.isPeriodic())
                {
                    task.setElapsedTimeMs(task.getElapsedTimeMs()-task.getTimeMs());
                }
            }
        }
    }
}

/* ! Cancel timer service. */
void CPPTimerInterface::cancel()
{
    std::fill(tasks, tasks + MAX_TIMER, TimerTask{});
}
