
#ifndef MVMSTATEMACHINEOCBS_H_
#define MVMSTATEMACHINEOCBS_H_

#include "../src-gen/MVMStateMachine.h"

class MVMStateMachineOCBs : public MVMStateMachine::DefaultSCI_OCB {
public:
	MVMStateMachineOCBs(MVMStateMachine* machine){}
	virtual ~MVMStateMachineOCBs();

	sc_boolean pressureTooHighPSV();

	void endExpiration();
};

#endif /* MVMSTATEMACHINEOCBS_H_ */
