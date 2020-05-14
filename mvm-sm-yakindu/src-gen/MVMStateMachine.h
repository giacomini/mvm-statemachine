/** Generated by YAKINDU Statechart Tools code generator. */

#ifndef MVMSTATEMACHINE_H_
#define MVMSTATEMACHINE_H_


#include <VentilationModes.h>
#include "..\src\sc_types.h"
#include "..\src\StatemachineInterface.h"
#include "..\src\TimedStatemachineInterface.h"

/*! \file Header of the state machine 'MVMStateMachine'.
*/


/*! Define indices of states in the StateConfVector */
#define SCVI_MAIN_REGION_STARTUP 0
#define SCVI_MAIN_REGION_PCV 0
#define SCVI_MAIN_REGION_PCV_R1_EXPIRATORYPAUSE 0
#define SCVI_MAIN_REGION_PCV_R1_EXPIRATION 0
#define SCVI_MAIN_REGION_PCV_R1_INSPIRATION 0
#define SCVI_MAIN_REGION_PCV_R1_INSPIRATORYPAUSE 0
#define SCVI_MAIN_REGION_PCV_R1_VENTILATIONOFF 0
#define SCVI_MAIN_REGION_PCV_R1_RM 0
#define SCVI_MAIN_REGION_PSV 0
#define SCVI_MAIN_REGION_PSV_R1_EXPIRATORYPAUSE 0
#define SCVI_MAIN_REGION_PSV_R1_EXPIRATION 0
#define SCVI_MAIN_REGION_PSV_R1_INSPIRATION 0
#define SCVI_MAIN_REGION_PSV_R1_VENTILATIONOFF 0
#define SCVI_MAIN_REGION_PSV_R1_INSPIRATORYPAUSE 0
#define SCVI_MAIN_REGION_PSV_R1_RM 0
#define SCVI_MAIN_REGION_TESTMODE 0
#define SCVI_MAIN_REGION_ERROR 0
#define SCVI_MAIN_REGION_PATIENTSELECTION 0
#define SCVI_MAIN_REGION__FINAL_ 0


class MVMStateMachine : public TimedStatemachineInterface, public StatemachineInterface
{
	public:
		MVMStateMachine();
		
		virtual ~MVMStateMachine();
		
		/*! Enumeration of all states */ 
		typedef enum
		{
			MVMStateMachine_last_state,
			main_region_StartUp,
			main_region_PCV,
			main_region_PCV_r1_ExpiratoryPause,
			main_region_PCV_r1_Expiration,
			main_region_PCV_r1_Inspiration,
			main_region_PCV_r1_InspiratoryPause,
			main_region_PCV_r1_VentilationOff,
			main_region_PCV_r1_RM,
			main_region_PSV,
			main_region_PSV_r1_ExpiratoryPause,
			main_region_PSV_r1_Expiration,
			main_region_PSV_r1_Inspiration,
			main_region_PSV_r1_VentilationOff,
			main_region_PSV_r1_InspiratoryPause,
			main_region_PSV_r1_RM,
			main_region_TestMode,
			main_region_Error,
			main_region_PatientSelection,
			main_region__final_
		} MVMStateMachineStates;
					
		static const sc_integer numStates = 19;
		
		//! Inner class for default interface scope.
		class DefaultSCI
		{
			public:
				/*! Raises the in event 'startupEnded' that is defined in the default interface scope. */
				void raise_startupEnded();
				
				
				/*! Raises the in event 'resume' that is defined in the default interface scope. */
				void raise_resume();
				
				
				/*! Raises the in event 'newPatient' that is defined in the default interface scope. */
				void raise_newPatient();
				
				
				/*! Raises the in event 'testMachine' that is defined in the default interface scope. */
				void raise_testMachine();
				
				
				/*! Raises the in event 'testPassed' that is defined in the default interface scope. */
				void raise_testPassed();
				
				
				/*! Raises the in event 'testFailed' that is defined in the default interface scope. */
				void raise_testFailed();
				
				
				/*! Raises the in event 'poweroff' that is defined in the default interface scope. */
				void raise_poweroff();
				
				
				/*! Raises the in event 'startVentilation' that is defined in the default interface scope. */
				void raise_startVentilation();
				
				
				/*! Raises the in event 'stopVentilation' that is defined in the default interface scope. */
				void raise_stopVentilation();
				
				
				/*! Checks if the out event 'Finish' that is defined in the default interface scope has been raised. */
				sc_boolean isRaised_finish() const;
				
				
				/*! Raises the in event 'setMode' that is defined in the default interface scope. */
				void raise_setMode(MVM_mode value);
				
				
				/*! Gets the value of the variable 'max_exp_pause' that is defined in the default interface scope. */
				int16_t get_max_exp_pause() const;
				
				
				/*! Gets the value of the variable 'max_ins_pause' that is defined in the default interface scope. */
				int16_t get_max_ins_pause() const;
				
				
				/*! Gets the value of the variable 'max_rm_time' that is defined in the default interface scope. */
				int16_t get_max_rm_time() const;
				
				/*! Sets the value of the variable 'max_rm_time' that is defined in the default interface scope. */
				void set_max_rm_time(int16_t value);
				
				
				/*! Gets the value of the variable 'exp_pause_button' that is defined in the default interface scope. */
				sc_boolean get_exp_pause_button() const;
				
				/*! Sets the value of the variable 'exp_pause_button' that is defined in the default interface scope. */
				void set_exp_pause_button(sc_boolean value);
				
				
				/*! Gets the value of the variable 'ins_pause_button' that is defined in the default interface scope. */
				sc_boolean get_ins_pause_button() const;
				
				/*! Sets the value of the variable 'ins_pause_button' that is defined in the default interface scope. */
				void set_ins_pause_button(sc_boolean value);
				
				
				/*! Gets the value of the variable 'rm_button_start' that is defined in the default interface scope. */
				sc_boolean get_rm_button_start() const;
				
				/*! Sets the value of the variable 'rm_button_start' that is defined in the default interface scope. */
				void set_rm_button_start(sc_boolean value);
				
				
				/*! Gets the value of the variable 'rm_button_stop' that is defined in the default interface scope. */
				sc_boolean get_rm_button_stop() const;
				
				/*! Sets the value of the variable 'rm_button_stop' that is defined in the default interface scope. */
				void set_rm_button_stop(sc_boolean value);
				
				
				
				
				
				
				/*! Gets the value of the variable 'inspiration_duration_ms' that is defined in the default interface scope. */
				int16_t get_inspiration_duration_ms() const;
				
				/*! Sets the value of the variable 'inspiration_duration_ms' that is defined in the default interface scope. */
				void set_inspiration_duration_ms(int16_t value);
				
				
				/*! Gets the value of the variable 'expiration_duration_ms' that is defined in the default interface scope. */
				int16_t get_expiration_duration_ms() const;
				
				/*! Sets the value of the variable 'expiration_duration_ms' that is defined in the default interface scope. */
				void set_expiration_duration_ms(int16_t value);
				
				
				
				
				/*! Gets the value of the variable 'triggerWindowDelay_ms' that is defined in the default interface scope. */
				int16_t get_triggerWindowDelay_ms() const;
				
				
				/*! Gets the value of the variable 'min_exp_time_psv' that is defined in the default interface scope. */
				int16_t get_min_exp_time_psv() const;
				
				/*! Sets the value of the variable 'min_exp_time_psv' that is defined in the default interface scope. */
				void set_min_exp_time_psv(int16_t value);
				
				
				/*! Gets the value of the variable 'max_insp_time_psv' that is defined in the default interface scope. */
				int16_t get_max_insp_time_psv() const;
				
				/*! Sets the value of the variable 'max_insp_time_psv' that is defined in the default interface scope. */
				void set_max_insp_time_psv(int16_t value);
				
				
				/*! Gets the value of the variable 'apnealag' that is defined in the default interface scope. */
				int16_t get_apnealag() const;
				
				/*! Sets the value of the variable 'apnealag' that is defined in the default interface scope. */
				void set_apnealag(int16_t value);
				
				
				
				
				
				
			private:
				friend class MVMStateMachine;
				sc_boolean startupEnded_raised;
				sc_boolean resume_raised;
				sc_boolean newPatient_raised;
				sc_boolean testMachine_raised;
				sc_boolean testPassed_raised;
				sc_boolean testFailed_raised;
				sc_boolean poweroff_raised;
				sc_boolean startVentilation_raised;
				sc_boolean stopVentilation_raised;
				sc_boolean Finish_raised;
				sc_boolean setMode_raised;
				MVM_mode setMode_value;
				static const int16_t max_exp_pause;
				static const int16_t max_ins_pause;
				int16_t max_rm_time;
				sc_boolean exp_pause_button;
				sc_boolean ins_pause_button;
				sc_boolean rm_button_start;
				sc_boolean rm_button_stop;
				int16_t inspiration_duration_ms;
				int16_t expiration_duration_ms;
				static const int16_t triggerWindowDelay_ms;
				int16_t min_exp_time_psv;
				int16_t max_insp_time_psv;
				int16_t apnealag;
				
				
		};
				//! Inner class for default interface scope operation callbacks.
				class DefaultSCI_OCB
				{
					public:
						virtual ~DefaultSCI_OCB() = 0;
						
						virtual void closeInputValve() = 0;
						
						virtual void openInputValve() = 0;
						
						virtual void closeOutputValve() = 0;
						
						virtual void openOutputValve() = 0;
						
						virtual sc_boolean dropPAW_ITS_PCV() = 0;
						
						virtual sc_boolean pressureTooHighPCV() = 0;
						
						virtual sc_boolean flowDropPSV() = 0;
						
						virtual sc_boolean dropPAW_ITS_PSV() = 0;
						
						virtual sc_boolean pressureTooHighPSV() = 0;
						
						
				};
				
				/*! Set the working instance of the operation callback interface 'DefaultSCI_OCB'. */
				void setDefaultSCI_OCB(DefaultSCI_OCB* operationCallback);
		
		/*! Returns an instance of the interface class 'DefaultSCI'. */
		DefaultSCI* getDefaultSCI();
		
		/*! Raises the in event 'startupEnded' that is defined in the default interface scope. */
		void raise_startupEnded();
		
		/*! Raises the in event 'resume' that is defined in the default interface scope. */
		void raise_resume();
		
		/*! Raises the in event 'newPatient' that is defined in the default interface scope. */
		void raise_newPatient();
		
		/*! Raises the in event 'testMachine' that is defined in the default interface scope. */
		void raise_testMachine();
		
		/*! Raises the in event 'testPassed' that is defined in the default interface scope. */
		void raise_testPassed();
		
		/*! Raises the in event 'testFailed' that is defined in the default interface scope. */
		void raise_testFailed();
		
		/*! Raises the in event 'poweroff' that is defined in the default interface scope. */
		void raise_poweroff();
		
		/*! Raises the in event 'startVentilation' that is defined in the default interface scope. */
		void raise_startVentilation();
		
		/*! Raises the in event 'stopVentilation' that is defined in the default interface scope. */
		void raise_stopVentilation();
		
		/*! Checks if the out event 'Finish' that is defined in the default interface scope has been raised. */
		sc_boolean isRaised_finish() const;
		
		/*! Raises the in event 'setMode' that is defined in the default interface scope. */
		void raise_setMode(MVM_mode value);
		
		/*! Gets the value of the variable 'max_exp_pause' that is defined in the default interface scope. */
		int16_t get_max_exp_pause() const;
		
		/*! Gets the value of the variable 'max_ins_pause' that is defined in the default interface scope. */
		int16_t get_max_ins_pause() const;
		
		/*! Gets the value of the variable 'max_rm_time' that is defined in the default interface scope. */
		int16_t get_max_rm_time() const;
		
		/*! Sets the value of the variable 'max_rm_time' that is defined in the default interface scope. */
		void set_max_rm_time(int16_t value);
		
		/*! Gets the value of the variable 'exp_pause_button' that is defined in the default interface scope. */
		sc_boolean get_exp_pause_button() const;
		
		/*! Sets the value of the variable 'exp_pause_button' that is defined in the default interface scope. */
		void set_exp_pause_button(sc_boolean value);
		
		/*! Gets the value of the variable 'ins_pause_button' that is defined in the default interface scope. */
		sc_boolean get_ins_pause_button() const;
		
		/*! Sets the value of the variable 'ins_pause_button' that is defined in the default interface scope. */
		void set_ins_pause_button(sc_boolean value);
		
		/*! Gets the value of the variable 'rm_button_start' that is defined in the default interface scope. */
		sc_boolean get_rm_button_start() const;
		
		/*! Sets the value of the variable 'rm_button_start' that is defined in the default interface scope. */
		void set_rm_button_start(sc_boolean value);
		
		/*! Gets the value of the variable 'rm_button_stop' that is defined in the default interface scope. */
		sc_boolean get_rm_button_stop() const;
		
		/*! Sets the value of the variable 'rm_button_stop' that is defined in the default interface scope. */
		void set_rm_button_stop(sc_boolean value);
		
		/*! Gets the value of the variable 'inspiration_duration_ms' that is defined in the default interface scope. */
		int16_t get_inspiration_duration_ms() const;
		
		/*! Sets the value of the variable 'inspiration_duration_ms' that is defined in the default interface scope. */
		void set_inspiration_duration_ms(int16_t value);
		
		/*! Gets the value of the variable 'expiration_duration_ms' that is defined in the default interface scope. */
		int16_t get_expiration_duration_ms() const;
		
		/*! Sets the value of the variable 'expiration_duration_ms' that is defined in the default interface scope. */
		void set_expiration_duration_ms(int16_t value);
		
		/*! Gets the value of the variable 'triggerWindowDelay_ms' that is defined in the default interface scope. */
		int16_t get_triggerWindowDelay_ms() const;
		
		/*! Gets the value of the variable 'min_exp_time_psv' that is defined in the default interface scope. */
		int16_t get_min_exp_time_psv() const;
		
		/*! Sets the value of the variable 'min_exp_time_psv' that is defined in the default interface scope. */
		void set_min_exp_time_psv(int16_t value);
		
		/*! Gets the value of the variable 'max_insp_time_psv' that is defined in the default interface scope. */
		int16_t get_max_insp_time_psv() const;
		
		/*! Sets the value of the variable 'max_insp_time_psv' that is defined in the default interface scope. */
		void set_max_insp_time_psv(int16_t value);
		
		/*! Gets the value of the variable 'apnealag' that is defined in the default interface scope. */
		int16_t get_apnealag() const;
		
		/*! Sets the value of the variable 'apnealag' that is defined in the default interface scope. */
		void set_apnealag(int16_t value);
		
		
		/*
		 * Functions inherited from StatemachineInterface
		 */
		virtual void init();
		
		virtual void enter();
		
		virtual void exit();
		
		virtual void runCycle();
		
		/*!
		* Checks if the state machine is active (until 2.4.1 this method was used for states).
		* A state machine is active if it has been entered. It is inactive if it has not been entered at all or if it has been exited.
		*/
		virtual sc_boolean isActive() const;
		
		
		/*!
		* Checks if all active states are final. 
		* If there are no active states then the state machine is considered being inactive. In this case this method returns false.
		*/
		virtual sc_boolean isFinal() const;
		
		/*
		 * Functions inherited from TimedStatemachineInterface
		 */
		virtual void setTimer(TimerInterface* timerInterface);
		
		virtual TimerInterface* getTimer();
		
		virtual void raiseTimeEvent(sc_eventid event);
		
		virtual sc_integer getNumberOfParallelTimeEvents();
		
		/*! Checks if the specified state is active (until 2.4.1 the used method for states was calles isActive()). */
		sc_boolean isStateActive(MVMStateMachineStates state) const;
		
		//! number of time events used by the state machine.
		static const sc_integer timeEventsCount = 12;
		
		//! number of time events that can be active at once.
		static const sc_integer parallelTimeEventsCount = 2;
		
		
	protected:
		
		
	private:
		MVMStateMachine(const MVMStateMachine &rhs);
		MVMStateMachine& operator=(const MVMStateMachine&);
		
		
		//! the maximum number of orthogonal states defines the dimension of the state configuration vector.
		static const sc_ushort maxOrthogonalStates = 1;
		
		TimerInterface* timer;
		sc_boolean timeEvents[timeEventsCount];
		
		
		MVMStateMachineStates stateConfVector[maxOrthogonalStates];
		
		sc_ushort stateConfVectorPosition;
		
		
		DefaultSCI iface;
		DefaultSCI_OCB* iface_OCB;
		
		// prototypes of all internal functions
		
		sc_boolean check_main_region_PCV_r1__choice_0_tr0_tr0();
		sc_boolean check_main_region_PCV_r1__choice_1_tr0_tr0();
		sc_boolean check_main_region_PCV_r1__choice_1_tr1_tr1();
		sc_boolean check_main_region_PCV_r1__choice_2_tr0_tr0();
		sc_boolean check_main_region_PCV_r1__choice_2_tr1_tr1();
		sc_boolean check_main_region_PSV_r1__choice_0_tr0_tr0();
		sc_boolean check_main_region_PSV_r1__choice_0_tr1_tr1();
		sc_boolean check_main_region_PSV_r1__choice_1_tr0_tr0();
		sc_boolean check_main_region_PSV_r1__choice_1_tr1_tr1();
		void effect_main_region_PCV_r1__choice_0_tr0();
		void effect_main_region_PCV_r1__choice_0_tr1();
		void effect_main_region_PCV_r1__choice_1_tr0();
		void effect_main_region_PCV_r1__choice_1_tr1();
		void effect_main_region_PCV_r1__choice_2_tr0();
		void effect_main_region_PCV_r1__choice_2_tr1();
		void effect_main_region_PSV_r1__choice_0_tr0();
		void effect_main_region_PSV_r1__choice_0_tr1();
		void effect_main_region_PSV_r1__choice_1_tr0();
		void effect_main_region_PSV_r1__choice_1_tr1();
		void enact_main_region_PCV_r1_ExpiratoryPause();
		void enact_main_region_PCV_r1_Expiration();
		void enact_main_region_PCV_r1_Inspiration();
		void enact_main_region_PCV_r1_InspiratoryPause();
		void enact_main_region_PCV_r1_RM();
		void enact_main_region_PSV_r1_ExpiratoryPause();
		void enact_main_region_PSV_r1_Expiration();
		void enact_main_region_PSV_r1_Inspiration();
		void enact_main_region_PSV_r1_InspiratoryPause();
		void enact_main_region_PSV_r1_RM();
		void exact_main_region_PCV_r1_ExpiratoryPause();
		void exact_main_region_PCV_r1_Expiration();
		void exact_main_region_PCV_r1_Inspiration();
		void exact_main_region_PCV_r1_InspiratoryPause();
		void exact_main_region_PCV_r1_RM();
		void exact_main_region_PSV_r1_ExpiratoryPause();
		void exact_main_region_PSV_r1_Expiration();
		void exact_main_region_PSV_r1_Inspiration();
		void exact_main_region_PSV_r1_InspiratoryPause();
		void exact_main_region_PSV_r1_RM();
		void enseq_main_region_StartUp_default();
		void enseq_main_region_PCV_default();
		void enseq_main_region_PCV_r1_ExpiratoryPause_default();
		void enseq_main_region_PCV_r1_Expiration_default();
		void enseq_main_region_PCV_r1_Inspiration_default();
		void enseq_main_region_PCV_r1_InspiratoryPause_default();
		void enseq_main_region_PCV_r1_VentilationOff_default();
		void enseq_main_region_PCV_r1_RM_default();
		void enseq_main_region_PSV_r1_ExpiratoryPause_default();
		void enseq_main_region_PSV_r1_Expiration_default();
		void enseq_main_region_PSV_r1_Inspiration_default();
		void enseq_main_region_PSV_r1_VentilationOff_default();
		void enseq_main_region_PSV_r1_InspiratoryPause_default();
		void enseq_main_region_PSV_r1_RM_default();
		void enseq_main_region_TestMode_default();
		void enseq_main_region_Error_default();
		void enseq_main_region_PatientSelection_default();
		void enseq_main_region__final__default();
		void enseq_main_region_default();
		void enseq_main_region_PCV_r1_default();
		void exseq_main_region_StartUp();
		void exseq_main_region_PCV();
		void exseq_main_region_PCV_r1_ExpiratoryPause();
		void exseq_main_region_PCV_r1_Expiration();
		void exseq_main_region_PCV_r1_Inspiration();
		void exseq_main_region_PCV_r1_InspiratoryPause();
		void exseq_main_region_PCV_r1_VentilationOff();
		void exseq_main_region_PCV_r1_RM();
		void exseq_main_region_PSV();
		void exseq_main_region_PSV_r1_ExpiratoryPause();
		void exseq_main_region_PSV_r1_Expiration();
		void exseq_main_region_PSV_r1_Inspiration();
		void exseq_main_region_PSV_r1_VentilationOff();
		void exseq_main_region_PSV_r1_InspiratoryPause();
		void exseq_main_region_PSV_r1_RM();
		void exseq_main_region_TestMode();
		void exseq_main_region_Error();
		void exseq_main_region_PatientSelection();
		void exseq_main_region__final_();
		void exseq_main_region();
		void exseq_main_region_PCV_r1();
		void exseq_main_region_PSV_r1();
		void react_main_region_PCV_r1__choice_0();
		void react_main_region_PCV_r1__choice_1();
		void react_main_region_PCV_r1__choice_2();
		void react_main_region_PSV_r1__choice_0();
		void react_main_region_PSV_r1__choice_1();
		void react_main_region__entry_Default();
		void react_main_region_PCV_r1__entry_Default();
		sc_boolean react();
		sc_boolean main_region_StartUp_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_ExpiratoryPause_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_Expiration_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_Inspiration_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_InspiratoryPause_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_VentilationOff_react(const sc_boolean try_transition);
		sc_boolean main_region_PCV_r1_RM_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_ExpiratoryPause_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_Expiration_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_Inspiration_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_VentilationOff_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_InspiratoryPause_react(const sc_boolean try_transition);
		sc_boolean main_region_PSV_r1_RM_react(const sc_boolean try_transition);
		sc_boolean main_region_TestMode_react(const sc_boolean try_transition);
		sc_boolean main_region_Error_react(const sc_boolean try_transition);
		sc_boolean main_region_PatientSelection_react(const sc_boolean try_transition);
		sc_boolean main_region__final__react(const sc_boolean try_transition);
		void clearInEvents();
		void clearOutEvents();
		
		
		
		
};


inline MVMStateMachine::DefaultSCI_OCB::~DefaultSCI_OCB() {}


#endif /* MVMSTATEMACHINE_H_ */
