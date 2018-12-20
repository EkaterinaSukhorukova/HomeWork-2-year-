#include "stdafx.h"
#include <cassert>
#include<thread>
#include<iostream>
#include<mutex>
using namespace std;

int result = 0;

void foo() {
	for (int i = 0; i < 1000000; ++i) {
		result += i;		
	}
}

void bar() {
	for (int i = 0; i < 1000000; ++i) {		
		result -= i;
		}
}

int main() {
	std::thread th1(foo);
	std::thread th2(bar);

	th1.join();
	th2.join();
	cout << result << endl;
	assert(result == 0);

	cout << "Done.\n";
}
