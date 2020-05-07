//============================================================================
// Name        : provayakindu.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
#include "MVMStateMachine.h"
#include "CPPTimerInterface.h"
#include "MVMStateMachineOCBs.h"

using namespace std;

int main() {
	CPPTimerInterface timer_sct;
	bool running = false;
	auto start = std::chrono::system_clock::now();
	MVMStateMachine sm;
	HAL myHAL;
	sm.set_hal(&myHAL);
	MVMStateMachineOCBs operationCallback(&sm);
	sm.setDefaultSCI_OCB(&operationCallback);
	std::cout << "init state machine" << std::endl;
	sm.set_inspiration_duration_ms(1000);
	sm.set_expiration_duration_ms(2000);
	sm.init();
	std::cout << "setting timer" << std::endl;
	sm.setTimer(&timer_sct);
	std::cout << "entering" << std::endl;
	sm.enter();
	for (;;) {
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		long sec = elapsed_seconds.count();
		// after 2 seconds run it
		if (sec > 2 && sec < 4 && ! running){
			std::cout << "start running" << std::endl;
			running = true;
			sm.raise_run();
		}
		// after 4 seconds stop it
		if (sec > 4 && running) {
			std::cout << "stopping" << std::endl;
			running = false;
			sm.raise_stop();
		}
		sm.runCycle();
		timer_sct.updateActiveTimer(&sm, 100); // 10 milliseconds
		if (sec > 5)
			break;
	}
	return 0;
}
