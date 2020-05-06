/*
 * MVM.h
 *
 *  Created on: 6 mag 2020
 *      Author: AngeloGargantini
 */

#ifndef MVM_H_
#define MVM_H_
#include "MVM_sm.h"

class MVM {
private:
	MVMContext fsm;
public:
	MVM();
	virtual ~MVM();
	// some methods
	void runAction();
};

#endif /* MVM_H_ */
