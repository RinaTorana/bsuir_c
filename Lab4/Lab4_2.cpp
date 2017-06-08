#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include "Lab4_1.h"
#include "Lab4_2.h"

/*
void main() {

// Create Array
int *A, n;

printf("Enter quantity of array A elements: \n");
scanf("%d", &n);

A = new int[n];

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

//Task

SumOfElements(A, n);

_getch();
}

void SumOfElements(int * A, int n)
{
	int modulo = fabs(*A);
	int index = 0;

	for (int i = 1; i < n; i++) {
		if (modulo > fabs(*(A + i))) {
			modulo = fabs(*(A + i));
			index = i;
		}
	}

	int counter = 0;
	for (int i = 1; i < n; i++) {
		if (modulo == fabs(*(A + i)) && i!=index) {
			counter++;
		}
 	}

	if (counter > 0) {
		printf("Error: There are several elements that have minimum value by modulo");
	}
	else {
		int sum = 0;

		for (int i = index + 1; i < n; i++) {
			sum = sum + fabs(*(A + i));
		}
		printf("Sum = %d \n", sum);
	}
}*/