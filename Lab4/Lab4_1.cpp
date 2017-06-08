#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include "Lab4_1.h"

void main() {

	// Array A
	int *A, n;

	printf("Enter quantity of array A elements: \n");
	scanf("%d", &n);

	A = (int *)(malloc(n * sizeof(int)));

	if (!A) {
		printf("Out of memory. Press any key \n");
		_getch();
		exit(1);
	}

	printf("Enter elements of the array A: \n");
	for (int i = 0; i < n; i++) {
		printf("[%d]= ", i);
		scanf("%d", A + i);
	}
	printf("Array A is created \n");

	//Array B
	int *B, m;

	printf("\nEnter quantity of array B elements \n");
	scanf("%d", &m);

	B = (int *)(malloc(m * sizeof(int)));

	if (!B) {
		printf("Out of memory. Press any key \n");
		_getch();
		exit(1);
	}
	printf("Enter elements of the array B: \n");
	for (int i = 0; i < m; i++) {
		printf("[%d]= ", i);
		scanf("%d", B + i);
	}
	printf("Array B is created \n");

	//Task
	MaxElementsBelowZero(n, A, m, B);
	free(A);
	free(B);

	_getch();
}

void MaxElementsBelowZero(int n, int * A, int m, int * B)
{
	double counterA = 0;
	for (int x = 0; x < n; x++) {
		if (*(A+x) < 0) {
			counterA++;
		}
	}
	printf("\nIn array A: %.0lf \n", counterA);

	double counterB = 0;

	for (int y = 0; y < m; y++) {
		if (*(B+y) < 0) {
			counterB++;
		}
	}
	printf("In array B: %.0lf \n", counterB);

	printf("\nArray with more values below 0: \n");
	if (counterA > counterB) {
		for (int i = 0; i < n; i++) {
			printf("Array A [%d]= %d \n", i, *(A + i));
		}
	} else if (counterA == 0 && counterB == 0) {
		printf("Cannot define: None of the arrays contains values below 0 \n");

	} else if (counterA == counterB) {
		printf("Cannot define: Arrays are equal \n");

	} else {
		for (int i = 0; i < m; i++) {
			printf("Array B [%d]= %d \n", i, *(B + i));
		}
	}
}