#include <MVMStateMachineOCBs.h>
#include <iostream>

MVMStateMachineOCBs::~MVMStateMachineOCBs() {
}

sc_boolean MVMStateMachineOCBs::pressureTooHighPSV() {
	std::cout << "checking pressureTooHighPSV" << std::endl;
	return true;
}

sc_boolean MVMStateMachineOCBs::dropPressurePCV() {
	std::cout << "checking dropPressurePCV" << std::endl;
	return true;
}

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


