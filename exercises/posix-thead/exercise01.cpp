// =================================================================
//
// File: exercise01.cpp
// Author(s):
// Description: This file contains the code to count the number of
//				even numbers within an array using pthreads.
//              To compile: g++ exercise01.cpp -lpthread
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
//
// =================================================================

#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <omp.h>
#include "utils.h"

const int SIZE = 1000000000; //1e9

using namespace std;

// implement your code here

int main(int argc, char* argv[]) {
	int *a;
	double ms;

	a = new int[SIZE];
	fill_array(a, SIZE);
	display_array("a", a);

	cout << "Starting..." << endl;
	ms = 0;
	for (int i = 0; i < N; i++) {
		start_timer();

		// call your code here

		ms += stop_timer();
	}
	cout << "result = " << setprecision(5) << result << "\n";
	cout << "avg time = " << setprecision(5) << (ms / N) << " ms" << endl;

	delete [] a;
	return 0;
}
