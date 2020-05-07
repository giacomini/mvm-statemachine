/** Generated by YAKINDU Statechart Tools code generator. */

#include "MVMStateMachine.h"

/*! \file Implementation of the state machine 'MVMStateMachine'
*/




MVMStateMachine::MVMStateMachine()  :
timer(sc_null),
stateConfVectorPosition(0),
iface(),
iface_OCB(sc_null)
{
}

MVMStateMachine::~MVMStateMachine()
{
}


void MVMStateMachine::init()
{
	for (sc_ushort i = 0; i < maxOrthogonalStates; ++i)
		stateConfVector[i] = MVMStateMachine_last_state;
	
	stateConfVectorPosition = 0;

	clearInEvents();
	clearOutEvents();
	
	/* Default init sequence for statechart MVMStateMachine */
	iface.inspiration_duration_ms = 0;
	iface.expiration_duration_ms = 0;
	iface.max_exp_pause = 0;
	iface.max_ins_pause = 0;
	iface.exp_pause_button = false;
	iface.ins_pause_button = false;
	iface.apnealag = 3000;
	iface.min_expiration_time = 2000;
	iface.max_insp_phase_psv = 2000;
}

void MVMStateMachine::enter()
{
	/* Default enter sequence for statechart MVMStateMachine */
	enseq_main_region_default();
}

void MVMStateMachine::exit()
{
	/* Default exit sequence for statechart MVMStateMachine */
	exseq_main_region();
}

sc_boolean MVMStateMachine::isActive() const
{
	return stateConfVector[0] != MVMStateMachine_last_state;
}

/* 
 * Always returns 'false' since this state machine can never become final.
 */
sc_boolean MVMStateMachine::isFinal() const
{
   return false;}

void MVMStateMachine::runCycle()
{
	
	clearOutEvents();
	for (stateConfVectorPosition = 0;
		stateConfVectorPosition < maxOrthogonalStates;
		stateConfVectorPosition++)
		{
			
		switch (stateConfVector[stateConfVectorPosition])
		{
		case main_region_StartUp :
		{
			main_region_StartUp_react(true);
			break;
		}
		case main_region_PCV_r1_ExpirationPause :
		{
			main_region_PCV_r1_ExpirationPause_react(true);
			break;
		}
		case main_region_PCV_r1_Expiration :
		{
			main_region_PCV_r1_Expiration_react(true);
			break;
		}
		case main_region_PCV_r1_Inspiration :
		{
			main_region_PCV_r1_Inspiration_react(true);
			break;
		}
		case main_region_PCV_r1_InspiratoryPause :
		{
			main_region_PCV_r1_InspiratoryPause_react(true);
			break;
		}
		case main_region_PCV_r1_off :
		{
			main_region_PCV_r1_off_react(true);
			break;
		}
		case main_region_PSV_r1_PauseExpiration :
		{
			main_region_PSV_r1_PauseExpiration_react(true);
			break;
		}
		case main_region_PSV_r1_Expiration :
		{
			main_region_PSV_r1_Expiration_react(true);
			break;
		}
		case main_region_PSV_r1_Inspiration :
		{
			main_region_PSV_r1_Inspiration_react(true);
			break;
		}
		case main_region_PSV_r1_off :
		{
			main_region_PSV_r1_off_react(true);
			break;
		}
		case main_region_PSV_r1_InspiratoryPause :
		{
			main_region_PSV_r1_InspiratoryPause_react(true);
			break;
		}
		default:
			break;
		}
	}
	clearInEvents();
}

void MVMStateMachine::clearInEvents()
{
	iface.run_raised = false;
	iface.stop_raised = false;
	iface.setMode_raised = false;
	iface.loadFinished_raised = false;
	timeEvents[0] = false; 
	timeEvents[1] = false; 
	timeEvents[2] = false; 
	timeEvents[3] = false; 
	timeEvents[4] = false; 
	timeEvents[5] = false; 
	timeEvents[6] = false; 
	timeEvents[7] = false; 
	timeEvents[8] = false; 
}

void MVMStateMachine::clearOutEvents()
{
}


void MVMStateMachine::setTimer(TimerInterface* timerInterface)
{
	this->timer = timerInterface;
}

TimerInterface* MVMStateMachine::getTimer()
{
	return timer;
}

sc_integer MVMStateMachine::getNumberOfParallelTimeEvents() {
	return parallelTimeEventsCount;
}

void MVMStateMachine::raiseTimeEvent(sc_eventid evid)
{
	if ((evid >= (sc_eventid)timeEvents) && (evid < (sc_eventid)(&timeEvents[timeEventsCount])))
	{
		*(sc_boolean*)evid = true;
	}				
}

sc_boolean MVMStateMachine::isStateActive(MVMStateMachineStates state) const
{
	switch (state)
	{
		case main_region_StartUp : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_STARTUP] == main_region_StartUp
			);
		case main_region_PCV : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV] >= main_region_PCV
				&& stateConfVector[SCVI_MAIN_REGION_PCV] <= main_region_PCV_r1_off);
		case main_region_PCV_r1_ExpirationPause : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV_R1_EXPIRATIONPAUSE] == main_region_PCV_r1_ExpirationPause
			);
		case main_region_PCV_r1_Expiration : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV_R1_EXPIRATION] == main_region_PCV_r1_Expiration
			);
		case main_region_PCV_r1_Inspiration : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV_R1_INSPIRATION] == main_region_PCV_r1_Inspiration
			);
		case main_region_PCV_r1_InspiratoryPause : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV_R1_INSPIRATORYPAUSE] == main_region_PCV_r1_InspiratoryPause
			);
		case main_region_PCV_r1_off : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PCV_R1_OFF] == main_region_PCV_r1_off
			);
		case main_region_PSV : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV] >= main_region_PSV
				&& stateConfVector[SCVI_MAIN_REGION_PSV] <= main_region_PSV_r1_InspiratoryPause);
		case main_region_PSV_r1_PauseExpiration : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV_R1_PAUSEEXPIRATION] == main_region_PSV_r1_PauseExpiration
			);
		case main_region_PSV_r1_Expiration : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV_R1_EXPIRATION] == main_region_PSV_r1_Expiration
			);
		case main_region_PSV_r1_Inspiration : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV_R1_INSPIRATION] == main_region_PSV_r1_Inspiration
			);
		case main_region_PSV_r1_off : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV_R1_OFF] == main_region_PSV_r1_off
			);
		case main_region_PSV_r1_InspiratoryPause : 
			return (sc_boolean) (stateConfVector[SCVI_MAIN_REGION_PSV_R1_INSPIRATORYPAUSE] == main_region_PSV_r1_InspiratoryPause
			);
		default: return false;
	}
}

MVMStateMachine::DefaultSCI* MVMStateMachine::getDefaultSCI()
{
	return &iface;
}
/* Functions for event run in interface DefaultSCI */
void MVMStateMachine::DefaultSCI::raise_run()
{
	run_raised = true;
}
void MVMStateMachine::raise_run()
{
	iface.raise_run();
}
/* Functions for event stop in interface DefaultSCI */
void MVMStateMachine::DefaultSCI::raise_stop()
{
	stop_raised = true;
}
void MVMStateMachine::raise_stop()
{
	iface.raise_stop();
}
/* Functions for event setMode in interface DefaultSCI */
void MVMStateMachine::DefaultSCI::raise_setMode(MVM_mode value)
{
	setMode_value = value;
	setMode_raised = true;
}
void MVMStateMachine::raise_setMode(MVM_mode value)
{
	iface.raise_setMode(value);
}
/* Functions for event loadFinished in interface DefaultSCI */
void MVMStateMachine::DefaultSCI::raise_loadFinished()
{
	loadFinished_raised = true;
}
void MVMStateMachine::raise_loadFinished()
{
	iface.raise_loadFinished();
}
HAL * MVMStateMachine::DefaultSCI::get_hal() const
{
	return hal;
}

HAL * MVMStateMachine::get_hal() const
{
	return iface.hal;
}

void MVMStateMachine::DefaultSCI::set_hal(HAL * value)
{
	this->hal = value;
}

void MVMStateMachine::set_hal(HAL * value)
{
	iface.hal = value;
}

int16_t MVMStateMachine::DefaultSCI::get_inspiration_duration_ms() const
{
	return inspiration_duration_ms;
}

int16_t MVMStateMachine::get_inspiration_duration_ms() const
{
	return iface.inspiration_duration_ms;
}

void MVMStateMachine::DefaultSCI::set_inspiration_duration_ms(int16_t value)
{
	this->inspiration_duration_ms = value;
}

void MVMStateMachine::set_inspiration_duration_ms(int16_t value)
{
	iface.inspiration_duration_ms = value;
}

int16_t MVMStateMachine::DefaultSCI::get_expiration_duration_ms() const
{
	return expiration_duration_ms;
}

int16_t MVMStateMachine::get_expiration_duration_ms() const
{
	return iface.expiration_duration_ms;
}

void MVMStateMachine::DefaultSCI::set_expiration_duration_ms(int16_t value)
{
	this->expiration_duration_ms = value;
}

void MVMStateMachine::set_expiration_duration_ms(int16_t value)
{
	iface.expiration_duration_ms = value;
}

int16_t MVMStateMachine::DefaultSCI::get_max_exp_pause() const
{
	return max_exp_pause;
}

int16_t MVMStateMachine::get_max_exp_pause() const
{
	return iface.max_exp_pause;
}

void MVMStateMachine::DefaultSCI::set_max_exp_pause(int16_t value)
{
	this->max_exp_pause = value;
}

void MVMStateMachine::set_max_exp_pause(int16_t value)
{
	iface.max_exp_pause = value;
}

int16_t MVMStateMachine::DefaultSCI::get_max_ins_pause() const
{
	return max_ins_pause;
}

int16_t MVMStateMachine::get_max_ins_pause() const
{
	return iface.max_ins_pause;
}

void MVMStateMachine::DefaultSCI::set_max_ins_pause(int16_t value)
{
	this->max_ins_pause = value;
}

void MVMStateMachine::set_max_ins_pause(int16_t value)
{
	iface.max_ins_pause = value;
}

sc_boolean MVMStateMachine::DefaultSCI::get_exp_pause_button() const
{
	return exp_pause_button;
}

sc_boolean MVMStateMachine::get_exp_pause_button() const
{
	return iface.exp_pause_button;
}

void MVMStateMachine::DefaultSCI::set_exp_pause_button(sc_boolean value)
{
	this->exp_pause_button = value;
}

void MVMStateMachine::set_exp_pause_button(sc_boolean value)
{
	iface.exp_pause_button = value;
}

sc_boolean MVMStateMachine::DefaultSCI::get_ins_pause_button() const
{
	return ins_pause_button;
}

sc_boolean MVMStateMachine::get_ins_pause_button() const
{
	return iface.ins_pause_button;
}

void MVMStateMachine::DefaultSCI::set_ins_pause_button(sc_boolean value)
{
	this->ins_pause_button = value;
}

void MVMStateMachine::set_ins_pause_button(sc_boolean value)
{
	iface.ins_pause_button = value;
}

int16_t MVMStateMachine::DefaultSCI::get_apnealag() const
{
	return apnealag;
}

int16_t MVMStateMachine::get_apnealag() const
{
	return iface.apnealag;
}

void MVMStateMachine::DefaultSCI::set_apnealag(int16_t value)
{
	this->apnealag = value;
}

void MVMStateMachine::set_apnealag(int16_t value)
{
	iface.apnealag = value;
}

int16_t MVMStateMachine::DefaultSCI::get_min_expiration_time() const
{
	return min_expiration_time;
}

int16_t MVMStateMachine::get_min_expiration_time() const
{
	return iface.min_expiration_time;
}

void MVMStateMachine::DefaultSCI::set_min_expiration_time(int16_t value)
{
	this->min_expiration_time = value;
}

void MVMStateMachine::set_min_expiration_time(int16_t value)
{
	iface.min_expiration_time = value;
}

int16_t MVMStateMachine::DefaultSCI::get_max_insp_phase_psv() const
{
	return max_insp_phase_psv;
}

int16_t MVMStateMachine::get_max_insp_phase_psv() const
{
	return iface.max_insp_phase_psv;
}

void MVMStateMachine::DefaultSCI::set_max_insp_phase_psv(int16_t value)
{
	this->max_insp_phase_psv = value;
}

void MVMStateMachine::set_max_insp_phase_psv(int16_t value)
{
	iface.max_insp_phase_psv = value;
}

void MVMStateMachine::setDefaultSCI_OCB(DefaultSCI_OCB* operationCallback)
{
	iface_OCB = operationCallback;
}

// implementations of all internal functions

sc_boolean MVMStateMachine::check_main_region_PCV_r1__choice_0_tr0_tr0()
{
	return iface.exp_pause_button;
}

sc_boolean MVMStateMachine::check_main_region_PCV_r1__choice_1_tr0_tr0()
{
	return iface.ins_pause_button;
}

sc_boolean MVMStateMachine::check_main_region_PCV_r1__choice_1_tr1_tr1()
{
	return !iface.ins_pause_button;
}

sc_boolean MVMStateMachine::check_main_region_PSV_r1__choice_0_tr1_tr1()
{
	return iface.ins_pause_button;
}

void MVMStateMachine::effect_main_region_PCV_r1__choice_0_tr0()
{
	enseq_main_region_PCV_r1_ExpirationPause_default();
}

void MVMStateMachine::effect_main_region_PCV_r1__choice_0_tr1()
{
	enseq_main_region_PCV_r1_Inspiration_default();
}

void MVMStateMachine::effect_main_region_PCV_r1__choice_1_tr0()
{
	enseq_main_region_PCV_r1_InspiratoryPause_default();
}

void MVMStateMachine::effect_main_region_PCV_r1__choice_1_tr1()
{
	enseq_main_region_PCV_r1_Expiration_default();
}

void MVMStateMachine::effect_main_region_PSV_r1__choice_0_tr1()
{
	enseq_main_region_PSV_r1_InspiratoryPause_default();
}

void MVMStateMachine::effect_main_region_PSV_r1__choice_0_tr0()
{
	enseq_main_region_PSV_r1_Expiration_default();
}

/* Entry action for state 'ExpirationPause'. */
void MVMStateMachine::enact_main_region_PCV_r1_ExpirationPause()
{
	/* Entry action for state 'ExpirationPause'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[0]), iface.max_exp_pause, false);
}

/* Entry action for state 'Expiration'. */
void MVMStateMachine::enact_main_region_PCV_r1_Expiration()
{
	/* Entry action for state 'Expiration'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[1]), iface.expiration_duration_ms, false);
	(*(iface.hal)).startExpiration();
}

/* Entry action for state 'Inspiration'. */
void MVMStateMachine::enact_main_region_PCV_r1_Inspiration()
{
	/* Entry action for state 'Inspiration'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[2]), iface.inspiration_duration_ms, false);
	(*(iface.hal)).startInspiration();
}

/* Entry action for state 'InspiratoryPause'. */
void MVMStateMachine::enact_main_region_PCV_r1_InspiratoryPause()
{
	/* Entry action for state 'InspiratoryPause'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[3]), iface.max_ins_pause, false);
}

/* Entry action for state 'PauseExpiration'. */
void MVMStateMachine::enact_main_region_PSV_r1_PauseExpiration()
{
	/* Entry action for state 'PauseExpiration'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[4]), iface.max_exp_pause, false);
}

/* Entry action for state 'Expiration'. */
void MVMStateMachine::enact_main_region_PSV_r1_Expiration()
{
	/* Entry action for state 'Expiration'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[5]), iface.apnealag, false);
	timer->setTimer(this, (sc_eventid)(&timeEvents[6]), iface.min_expiration_time, false);
	(*(iface.hal)).startExpiration();
}

/* Entry action for state 'Inspiration'. */
void MVMStateMachine::enact_main_region_PSV_r1_Inspiration()
{
	/* Entry action for state 'Inspiration'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[7]), iface.max_insp_phase_psv, false);
	(*(iface.hal)).startInspiration();
}

/* Entry action for state 'InspiratoryPause'. */
void MVMStateMachine::enact_main_region_PSV_r1_InspiratoryPause()
{
	/* Entry action for state 'InspiratoryPause'. */
	timer->setTimer(this, (sc_eventid)(&timeEvents[8]), iface.max_ins_pause, false);
}

/* Exit action for state 'ExpirationPause'. */
void MVMStateMachine::exact_main_region_PCV_r1_ExpirationPause()
{
	/* Exit action for state 'ExpirationPause'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[0]));
}

/* Exit action for state 'Expiration'. */
void MVMStateMachine::exact_main_region_PCV_r1_Expiration()
{
	/* Exit action for state 'Expiration'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[1]));
	(*(iface.hal)).endExpiration();
}

/* Exit action for state 'Inspiration'. */
void MVMStateMachine::exact_main_region_PCV_r1_Inspiration()
{
	/* Exit action for state 'Inspiration'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[2]));
	(*(iface.hal)).endInspiration();
}

/* Exit action for state 'InspiratoryPause'. */
void MVMStateMachine::exact_main_region_PCV_r1_InspiratoryPause()
{
	/* Exit action for state 'InspiratoryPause'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[3]));
}

/* Exit action for state 'PauseExpiration'. */
void MVMStateMachine::exact_main_region_PSV_r1_PauseExpiration()
{
	/* Exit action for state 'PauseExpiration'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[4]));
}

/* Exit action for state 'Expiration'. */
void MVMStateMachine::exact_main_region_PSV_r1_Expiration()
{
	/* Exit action for state 'Expiration'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[5]));
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[6]));
	(*(iface.hal)).endExpiration();
}

/* Exit action for state 'Inspiration'. */
void MVMStateMachine::exact_main_region_PSV_r1_Inspiration()
{
	/* Exit action for state 'Inspiration'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[7]));
	(*(iface.hal)).endInspiration();
}

/* Exit action for state 'InspiratoryPause'. */
void MVMStateMachine::exact_main_region_PSV_r1_InspiratoryPause()
{
	/* Exit action for state 'InspiratoryPause'. */
	timer->unsetTimer(this, (sc_eventid)(&timeEvents[8]));
}

/* 'default' enter sequence for state StartUp */
void MVMStateMachine::enseq_main_region_StartUp_default()
{
	/* 'default' enter sequence for state StartUp */
	stateConfVector[0] = main_region_StartUp;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state ExpirationPause */
void MVMStateMachine::enseq_main_region_PCV_r1_ExpirationPause_default()
{
	/* 'default' enter sequence for state ExpirationPause */
	enact_main_region_PCV_r1_ExpirationPause();
	stateConfVector[0] = main_region_PCV_r1_ExpirationPause;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Expiration */
void MVMStateMachine::enseq_main_region_PCV_r1_Expiration_default()
{
	/* 'default' enter sequence for state Expiration */
	enact_main_region_PCV_r1_Expiration();
	stateConfVector[0] = main_region_PCV_r1_Expiration;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Inspiration */
void MVMStateMachine::enseq_main_region_PCV_r1_Inspiration_default()
{
	/* 'default' enter sequence for state Inspiration */
	enact_main_region_PCV_r1_Inspiration();
	stateConfVector[0] = main_region_PCV_r1_Inspiration;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state InspiratoryPause */
void MVMStateMachine::enseq_main_region_PCV_r1_InspiratoryPause_default()
{
	/* 'default' enter sequence for state InspiratoryPause */
	enact_main_region_PCV_r1_InspiratoryPause();
	stateConfVector[0] = main_region_PCV_r1_InspiratoryPause;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state off */
void MVMStateMachine::enseq_main_region_PCV_r1_off_default()
{
	/* 'default' enter sequence for state off */
	stateConfVector[0] = main_region_PCV_r1_off;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state PauseExpiration */
void MVMStateMachine::enseq_main_region_PSV_r1_PauseExpiration_default()
{
	/* 'default' enter sequence for state PauseExpiration */
	enact_main_region_PSV_r1_PauseExpiration();
	stateConfVector[0] = main_region_PSV_r1_PauseExpiration;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Expiration */
void MVMStateMachine::enseq_main_region_PSV_r1_Expiration_default()
{
	/* 'default' enter sequence for state Expiration */
	enact_main_region_PSV_r1_Expiration();
	stateConfVector[0] = main_region_PSV_r1_Expiration;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Inspiration */
void MVMStateMachine::enseq_main_region_PSV_r1_Inspiration_default()
{
	/* 'default' enter sequence for state Inspiration */
	enact_main_region_PSV_r1_Inspiration();
	stateConfVector[0] = main_region_PSV_r1_Inspiration;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state off */
void MVMStateMachine::enseq_main_region_PSV_r1_off_default()
{
	/* 'default' enter sequence for state off */
	stateConfVector[0] = main_region_PSV_r1_off;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state InspiratoryPause */
void MVMStateMachine::enseq_main_region_PSV_r1_InspiratoryPause_default()
{
	/* 'default' enter sequence for state InspiratoryPause */
	enact_main_region_PSV_r1_InspiratoryPause();
	stateConfVector[0] = main_region_PSV_r1_InspiratoryPause;
	stateConfVectorPosition = 0;
}

/* 'default' enter sequence for region main region */
void MVMStateMachine::enseq_main_region_default()
{
	/* 'default' enter sequence for region main region */
	react_main_region__entry_Default();
}

/* Default exit sequence for state StartUp */
void MVMStateMachine::exseq_main_region_StartUp()
{
	/* Default exit sequence for state StartUp */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state PCV */
void MVMStateMachine::exseq_main_region_PCV()
{
	/* Default exit sequence for state PCV */
	exseq_main_region_PCV_r1();
}

/* Default exit sequence for state ExpirationPause */
void MVMStateMachine::exseq_main_region_PCV_r1_ExpirationPause()
{
	/* Default exit sequence for state ExpirationPause */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PCV_r1_ExpirationPause();
}

/* Default exit sequence for state Expiration */
void MVMStateMachine::exseq_main_region_PCV_r1_Expiration()
{
	/* Default exit sequence for state Expiration */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PCV_r1_Expiration();
}

/* Default exit sequence for state Inspiration */
void MVMStateMachine::exseq_main_region_PCV_r1_Inspiration()
{
	/* Default exit sequence for state Inspiration */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PCV_r1_Inspiration();
}

/* Default exit sequence for state InspiratoryPause */
void MVMStateMachine::exseq_main_region_PCV_r1_InspiratoryPause()
{
	/* Default exit sequence for state InspiratoryPause */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PCV_r1_InspiratoryPause();
}

/* Default exit sequence for state off */
void MVMStateMachine::exseq_main_region_PCV_r1_off()
{
	/* Default exit sequence for state off */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state PSV */
void MVMStateMachine::exseq_main_region_PSV()
{
	/* Default exit sequence for state PSV */
	exseq_main_region_PSV_r1();
}

/* Default exit sequence for state PauseExpiration */
void MVMStateMachine::exseq_main_region_PSV_r1_PauseExpiration()
{
	/* Default exit sequence for state PauseExpiration */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PSV_r1_PauseExpiration();
}

/* Default exit sequence for state Expiration */
void MVMStateMachine::exseq_main_region_PSV_r1_Expiration()
{
	/* Default exit sequence for state Expiration */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PSV_r1_Expiration();
}

/* Default exit sequence for state Inspiration */
void MVMStateMachine::exseq_main_region_PSV_r1_Inspiration()
{
	/* Default exit sequence for state Inspiration */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PSV_r1_Inspiration();
}

/* Default exit sequence for state off */
void MVMStateMachine::exseq_main_region_PSV_r1_off()
{
	/* Default exit sequence for state off */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
}

/* Default exit sequence for state InspiratoryPause */
void MVMStateMachine::exseq_main_region_PSV_r1_InspiratoryPause()
{
	/* Default exit sequence for state InspiratoryPause */
	stateConfVector[0] = MVMStateMachine_last_state;
	stateConfVectorPosition = 0;
	exact_main_region_PSV_r1_InspiratoryPause();
}

/* Default exit sequence for region main region */
void MVMStateMachine::exseq_main_region()
{
	/* Default exit sequence for region main region */
	/* Handle exit of all possible states (of MVMStateMachine.main_region) at position 0... */
	switch(stateConfVector[ 0 ])
	{
		case main_region_StartUp :
		{
			exseq_main_region_StartUp();
			break;
		}
		case main_region_PCV_r1_ExpirationPause :
		{
			exseq_main_region_PCV_r1_ExpirationPause();
			break;
		}
		case main_region_PCV_r1_Expiration :
		{
			exseq_main_region_PCV_r1_Expiration();
			break;
		}
		case main_region_PCV_r1_Inspiration :
		{
			exseq_main_region_PCV_r1_Inspiration();
			break;
		}
		case main_region_PCV_r1_InspiratoryPause :
		{
			exseq_main_region_PCV_r1_InspiratoryPause();
			break;
		}
		case main_region_PCV_r1_off :
		{
			exseq_main_region_PCV_r1_off();
			break;
		}
		case main_region_PSV_r1_PauseExpiration :
		{
			exseq_main_region_PSV_r1_PauseExpiration();
			break;
		}
		case main_region_PSV_r1_Expiration :
		{
			exseq_main_region_PSV_r1_Expiration();
			break;
		}
		case main_region_PSV_r1_Inspiration :
		{
			exseq_main_region_PSV_r1_Inspiration();
			break;
		}
		case main_region_PSV_r1_off :
		{
			exseq_main_region_PSV_r1_off();
			break;
		}
		case main_region_PSV_r1_InspiratoryPause :
		{
			exseq_main_region_PSV_r1_InspiratoryPause();
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r1 */
void MVMStateMachine::exseq_main_region_PCV_r1()
{
	/* Default exit sequence for region r1 */
	/* Handle exit of all possible states (of MVMStateMachine.main_region.PCV.r1) at position 0... */
	switch(stateConfVector[ 0 ])
	{
		case main_region_PCV_r1_ExpirationPause :
		{
			exseq_main_region_PCV_r1_ExpirationPause();
			break;
		}
		case main_region_PCV_r1_Expiration :
		{
			exseq_main_region_PCV_r1_Expiration();
			break;
		}
		case main_region_PCV_r1_Inspiration :
		{
			exseq_main_region_PCV_r1_Inspiration();
			break;
		}
		case main_region_PCV_r1_InspiratoryPause :
		{
			exseq_main_region_PCV_r1_InspiratoryPause();
			break;
		}
		case main_region_PCV_r1_off :
		{
			exseq_main_region_PCV_r1_off();
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r1 */
void MVMStateMachine::exseq_main_region_PSV_r1()
{
	/* Default exit sequence for region r1 */
	/* Handle exit of all possible states (of MVMStateMachine.main_region.PSV.r1) at position 0... */
	switch(stateConfVector[ 0 ])
	{
		case main_region_PSV_r1_PauseExpiration :
		{
			exseq_main_region_PSV_r1_PauseExpiration();
			break;
		}
		case main_region_PSV_r1_Expiration :
		{
			exseq_main_region_PSV_r1_Expiration();
			break;
		}
		case main_region_PSV_r1_Inspiration :
		{
			exseq_main_region_PSV_r1_Inspiration();
			break;
		}
		case main_region_PSV_r1_off :
		{
			exseq_main_region_PSV_r1_off();
			break;
		}
		case main_region_PSV_r1_InspiratoryPause :
		{
			exseq_main_region_PSV_r1_InspiratoryPause();
			break;
		}
		default: break;
	}
}

/* The reactions of state null. */
void MVMStateMachine::react_main_region_PCV_r1__choice_0()
{
	/* The reactions of state null. */
	if (check_main_region_PCV_r1__choice_0_tr0_tr0())
	{ 
		effect_main_region_PCV_r1__choice_0_tr0();
	}  else
	{
		effect_main_region_PCV_r1__choice_0_tr1();
	}
}

/* The reactions of state null. */
void MVMStateMachine::react_main_region_PCV_r1__choice_1()
{
	/* The reactions of state null. */
	if (check_main_region_PCV_r1__choice_1_tr0_tr0())
	{ 
		effect_main_region_PCV_r1__choice_1_tr0();
	}  else
	{
		if (check_main_region_PCV_r1__choice_1_tr1_tr1())
		{ 
			effect_main_region_PCV_r1__choice_1_tr1();
		} 
	}
}

/* The reactions of state null. */
void MVMStateMachine::react_main_region_PSV_r1__choice_0()
{
	/* The reactions of state null. */
	if (check_main_region_PSV_r1__choice_0_tr1_tr1())
	{ 
		effect_main_region_PSV_r1__choice_0_tr1();
	}  else
	{
		effect_main_region_PSV_r1__choice_0_tr0();
	}
}

/* Default react sequence for initial entry  */
void MVMStateMachine::react_main_region__entry_Default()
{
	/* Default react sequence for initial entry  */
	enseq_main_region_StartUp_default();
}

sc_boolean MVMStateMachine::react() {
	/* State machine reactions. */
	return false;
}

sc_boolean MVMStateMachine::main_region_StartUp_react(const sc_boolean try_transition) {
	/* The reactions of state StartUp. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((react()) == (false))
		{ 
			if (iface.loadFinished_raised)
			{ 
				exseq_main_region_StartUp();
				enseq_main_region_PCV_r1_off_default();
			}  else
			{
				did_transition = false;
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_react(const sc_boolean try_transition) {
	/* The reactions of state PCV. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((react()) == (false))
		{ 
			did_transition = false;
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_r1_ExpirationPause_react(const sc_boolean try_transition) {
	/* The reactions of state ExpirationPause. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PCV_react(try_transition)) == (false))
		{ 
			if (timeEvents[0])
			{ 
				exseq_main_region_PCV_r1_ExpirationPause();
				enseq_main_region_PCV_r1_Inspiration_default();
			}  else
			{
				if (!iface.exp_pause_button)
				{ 
					exseq_main_region_PCV_r1_ExpirationPause();
					enseq_main_region_PCV_r1_Inspiration_default();
				}  else
				{
					did_transition = false;
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_r1_Expiration_react(const sc_boolean try_transition) {
	/* The reactions of state Expiration. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PCV_react(try_transition)) == (false))
		{ 
			if (timeEvents[1])
			{ 
				exseq_main_region_PCV_r1_Expiration();
				react_main_region_PCV_r1__choice_0();
			}  else
			{
				if (((*(iface.hal)).getPressure()) < (10))
				{ 
					exseq_main_region_PCV_r1_Expiration();
					enseq_main_region_PCV_r1_Inspiration_default();
				}  else
				{
					if (iface.stop_raised)
					{ 
						exseq_main_region_PCV_r1_Expiration();
						enseq_main_region_PCV_r1_off_default();
					}  else
					{
						did_transition = false;
					}
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_r1_Inspiration_react(const sc_boolean try_transition) {
	/* The reactions of state Inspiration. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PCV_react(try_transition)) == (false))
		{ 
			if (timeEvents[2])
			{ 
				exseq_main_region_PCV_r1_Inspiration();
				react_main_region_PCV_r1__choice_1();
			}  else
			{
				did_transition = false;
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_r1_InspiratoryPause_react(const sc_boolean try_transition) {
	/* The reactions of state InspiratoryPause. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PCV_react(try_transition)) == (false))
		{ 
			if (!iface.ins_pause_button)
			{ 
				exseq_main_region_PCV_r1_InspiratoryPause();
				enseq_main_region_PCV_r1_Expiration_default();
			}  else
			{
				if (timeEvents[3])
				{ 
					exseq_main_region_PCV_r1_InspiratoryPause();
					enseq_main_region_PCV_r1_Expiration_default();
				}  else
				{
					did_transition = false;
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PCV_r1_off_react(const sc_boolean try_transition) {
	/* The reactions of state off. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PCV_react(try_transition)) == (false))
		{ 
			if (((iface.setMode_raised)) && (((iface.setMode_value) == (P_SUPPORTED_V))))
			{ 
				exseq_main_region_PCV();
				enseq_main_region_PSV_r1_off_default();
			}  else
			{
				if (iface.run_raised)
				{ 
					exseq_main_region_PCV_r1_off();
					enseq_main_region_PCV_r1_Inspiration_default();
				}  else
				{
					did_transition = false;
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_react(const sc_boolean try_transition) {
	/* The reactions of state PSV. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((react()) == (false))
		{ 
			did_transition = false;
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_r1_PauseExpiration_react(const sc_boolean try_transition) {
	/* The reactions of state PauseExpiration. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PSV_react(try_transition)) == (false))
		{ 
			if (timeEvents[4])
			{ 
				exseq_main_region_PSV_r1_PauseExpiration();
				enseq_main_region_PSV_r1_Inspiration_default();
			}  else
			{
				if (!iface.exp_pause_button)
				{ 
					exseq_main_region_PSV_r1_PauseExpiration();
					enseq_main_region_PSV_r1_Inspiration_default();
				}  else
				{
					did_transition = false;
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_r1_Expiration_react(const sc_boolean try_transition) {
	/* The reactions of state Expiration. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PSV_react(try_transition)) == (false))
		{ 
			if (((*(iface.hal)).getPressure()) < (10))
			{ 
				exseq_main_region_PSV_r1_Expiration();
				enseq_main_region_PSV_r1_Inspiration_default();
			}  else
			{
				if (timeEvents[5])
				{ 
					exseq_main_region_PSV();
					enseq_main_region_PCV_r1_Inspiration_default();
				}  else
				{
					if (((timeEvents[6])) && ((iface.exp_pause_button)))
					{ 
						exseq_main_region_PSV_r1_Expiration();
						enseq_main_region_PSV_r1_PauseExpiration_default();
					}  else
					{
						did_transition = false;
					}
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_r1_Inspiration_react(const sc_boolean try_transition) {
	/* The reactions of state Inspiration. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PSV_react(try_transition)) == (false))
		{ 
			if ((*(iface.hal)).flowDrop())
			{ 
				exseq_main_region_PSV_r1_Inspiration();
				react_main_region_PSV_r1__choice_0();
			}  else
			{
				if (timeEvents[7])
				{ 
					exseq_main_region_PSV_r1_Inspiration();
					react_main_region_PSV_r1__choice_0();
				}  else
				{
					if (iface_OCB->pressureTooHighPSV())
					{ 
						exseq_main_region_PSV_r1_Inspiration();
						enseq_main_region_PSV_r1_Expiration_default();
					}  else
					{
						did_transition = false;
					}
				}
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_r1_off_react(const sc_boolean try_transition) {
	/* The reactions of state off. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PSV_react(try_transition)) == (false))
		{ 
			if (iface.run_raised)
			{ 
				exseq_main_region_PSV_r1_off();
				enseq_main_region_PSV_r1_Inspiration_default();
			}  else
			{
				did_transition = false;
			}
		} 
	} 
	return did_transition;
}

sc_boolean MVMStateMachine::main_region_PSV_r1_InspiratoryPause_react(const sc_boolean try_transition) {
	/* The reactions of state InspiratoryPause. */
	sc_boolean did_transition = try_transition;
	if (try_transition)
	{ 
		if ((main_region_PSV_react(try_transition)) == (false))
		{ 
			if (!iface.ins_pause_button)
			{ 
				exseq_main_region_PSV_r1_InspiratoryPause();
				enseq_main_region_PSV_r1_Expiration_default();
			}  else
			{
				if (timeEvents[8])
				{ 
					exseq_main_region_PSV_r1_InspiratoryPause();
					enseq_main_region_PSV_r1_Expiration_default();
				}  else
				{
					did_transition = false;
				}
			}
		} 
	} 
	return did_transition;
}



