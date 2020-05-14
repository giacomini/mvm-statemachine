
#ifndef MVMSTATEMACHINEOCBS_H_
#define MVMSTATEMACHINEOCBS_H_

#include "../src-gen/MVMStateMachine.h"

class MVMStateMachineOCBs : public MVMStateMachine::DefaultSCI_OCB {
public:
	MVMStateMachineOCBs(MVMStateMachine* machine){}
	virtual ~MVMStateMachineOCBs();

	// general commands

	virtual void closeInputValve();

	virtual void openInputValve();

	virtual void closeOutputValve();

	virtual void openOutputValve();

	// general

	virtual sc_boolean pawGTMaxPinsp();


	// PCV

	virtual sc_boolean dropPAW_ITS_PCV();

	// PSV

	virtual sc_boolean flowDropPSV();

	virtual sc_boolean dropPAW_ITS_PSV();

	virtual int16_t min_exp_time_psv();
};

#endif /* MVMSTATEMACHINEOCBS_H_ */
