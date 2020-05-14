#include <MVMStateMachineOCBs.h>
#include <iostream>

MVMStateMachineOCBs::~MVMStateMachineOCBs() {
}

// VALVES
void MVMStateMachineOCBs::closeInputValve() {
	std::cout << "end inspiration - close in valve" << std::endl;
}

void MVMStateMachineOCBs::openInputValve() {
	std::cout << "start inspiration - open in valve" << std::endl;
}

void MVMStateMachineOCBs::closeOutputValve() {
	std::cout << "end expiration - close out valve" << std::endl;
}

void MVMStateMachineOCBs::openOutputValve() {
	std::cout << "start expiration - open out valve" << std::endl;
}

sc_boolean MVMStateMachineOCBs::pawGTMaxPinsp(){
	std::cout << "checking pressure TooHigh" << std::endl;
	return false;
}

// PCV
sc_boolean MVMStateMachineOCBs::dropPAW_ITS_PCV() {
	std::cout << "checking dropPAW_ITS_PCV" << std::endl;
	return false;
}
// PSV
sc_boolean MVMStateMachineOCBs::flowDropPSV(){
	std::cout << "checking flowDropPSV" << std::endl;
	return false;
}
sc_boolean MVMStateMachineOCBs::dropPAW_ITS_PSV(){
	std::cout << "checking dropPAW_ITS_PSV" << std::endl;
	return false;
}

int16_t MVMStateMachineOCBs::min_exp_time_psv(){
	std::cout << "computing  min_exp_time_psv" << std::endl;
	return 200;
}


