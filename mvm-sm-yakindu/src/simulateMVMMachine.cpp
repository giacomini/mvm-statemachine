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

using namespace std;

int main() {
	CPPTimerInterface timer_sct;
	bool running = false;
	auto start = std::chrono::system_clock::now();
	MVMStateMachine sm;
	HAL myHAL;
	sm.set_hal(&myHAL);
	std::cout << "init state machine" << std::endl;
	sm.init();
	std::cout << "setting timer" << std::endl;
	sm.setTimer(&timer_sct);
	std::cout << "entering" << std::endl;
	sm.enter();
	for (;;) {
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		// after 2 seconds
		if (elapsed_seconds.count() > 2 && !running) {
			std::cout << "running" << std::endl;
			running = true;
			sm.raise_run();
		}
		sm.runCycle();
		timer_sct.updateActiveTimer(&sm, 100); // 100 milliseconds
		if (elapsed_seconds.count() > 5)
			break;
	}
	return 0;
}
