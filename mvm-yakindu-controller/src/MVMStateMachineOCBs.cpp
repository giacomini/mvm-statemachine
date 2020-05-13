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

// PCV
sc_boolean MVMStateMachineOCBs::dropPAW_ITS_PCV() {
	std::cout << "checking dropPAW_ITS_PCV" << std::endl;
	return false;
}
sc_boolean MVMStateMachineOCBs::pressureTooHighPCV(){
	std::cout << "checking pressureTooHighPCV" << std::endl;
	return false;
}
// PSV
sc_boolean MVMStateMachineOCBs::pressureTooHighPSV() {
	std::cout << "checking pressureTooHighPSV" << std::endl;
	return false;
}
sc_boolean MVMStateMachineOCBs::flowDropPSV(){
	std::cout << "checking flowDropPSV" << std::endl;
	return false;
}
sc_boolean MVMStateMachineOCBs::dropPAW_ITS_PSV(){
	std::cout << "checking dropPAW_ITS_PSV" << std::endl;
	return false;
}

