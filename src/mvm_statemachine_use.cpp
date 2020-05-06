//============================================================================
// Name        : mvm-statemachine.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MVM.h"

int main() {
	MVM mvm;
	for (int i = 0; i < 100; i++){
		mvm.step();
	}
	return 0;
}
