#pragma once
#include <iostream>
#include <stdio.h>

void PrintN(int N);

unsigned int size(unsigned int *N) {
	return *(&N + 1) - *(&N) - 2;  // I can't figure out why it's two off...
}

/*
https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1
*/
void PrintThePattern_Set1(unsigned int N[]) {
	std::cout << "So far so good" << std::endl;
 
	unsigned int length = size(N);
	std::cout << "Size of N: " << length << std::endl;

	if (length < 2) {
		std::cout << "Not enough parameters." << std::endl;
		exit(-1);  // If there's not at least two ints, just quit 
	}

	// The first item in the array is the number of numbers:
	for (unsigned int i = 0; i < N[0]; i++)
	{
		PrintN(N[i + 1]);
	}
	

}



void PrintN(int N) {
	//Print N number of lines, with N, N-1...1 N times then N-1 times, etc.
	for (int i = N; i > 0; i--) {
		for (int j = N; j > 0; j--) {
			for (int k = i; k > 0; k--) {
				std::cout << j;
			}
		}
			std::cout << "$";
	}
	//it said to just print $ instead of new lines
	std::cout << std::endl;
}





/*
https://practice.geeksforgeeks.org/problems/series-ap/0
Print the Nth term of the arithmetic series
*/
void PrintNOfArithmeticSeries(int in1, int in2, int N) {
	if (in1 < -10000 || in1 > 10000 || in2 < -10000 || in2 > 10000) {
		std::cerr << "IN values out of range";
		exit(-1);
	}
	if (N > 1000 || N < 1) {
		std::cerr << "N value out of range";
		exit(-1);
	}
	//Basic error checking done
	
	int stepSize = in2 - in1;

	std::cout << "With " << in1 << ", " << in2 << " the term number " << N << " is: " << in1 + ((N-1) * stepSize) ;  // -1 since we are including the first term in the count 
}