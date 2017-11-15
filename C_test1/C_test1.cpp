// C_test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"

int main()
{
	const int arraySize = 1000;
	int a[arraySize];
	int b[arraySize];
	int c[arraySize];
	for (int i = 0; i < arraySize; i++) {
		a[i] = i;
		b[i] = i * 10;
	}
	time_t start = time(NULL);

	for (int i = 0; i < arraySize * 10000; i++) {
		for(int j=0; j< arraySize; j++)
			c[j] = a[j] + b[j];
	}

	time_t end = time(NULL);
	printf("Time = %d\n", (end - start));
	return 0;
}

