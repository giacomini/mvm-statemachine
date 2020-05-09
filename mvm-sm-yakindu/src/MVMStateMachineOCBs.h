
#ifndef MVMSTATEMACHINEOCBS_H_
#define MVMSTATEMACHINEOCBS_H_

#include "../src-gen/MVMStateMachine.h"

class MVMStateMachineOCBs : public MVMStateMachine::DefaultSCI_OCB {
public:
	MVMStateMachineOCBs(MVMStateMachine* machine){}
	virtual ~MVMStateMachineOCBs();

	virtual sc_boolean pressureTooHighPSV();

	virtual void closeInputValve();

	virtual void openInputValve();

	virtual void closeOutputValve();

	virtual void openOutputValve();

	virtual sc_boolean dropPressurePCV();
};

#endif /* MVMSTATEMACHINEOCBS_H_ */
