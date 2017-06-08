#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <process.h>

/*
void main() {

	double s, n, a = 0;

	do {
		if (a >= 1) {
			printf("Not possible to make calculations with entered values (s and n are equal by modulo or n equals to 0). \n Enter values one more time \n");
		}
		
		++a;
		printf("Enter s: \n");
		scanf_s("%lf", &s);

		printf("Enter n: \n");
		scanf_s("%lf", &n);
	} while (fabs(n) == fabs(s) || n == 0);

	if (fabs(n)/2 < s && s <= fabs(n)) {
		double t2;

		printf("Entered values correspond to |n|/2 < s <= |n| \n");
		t2 = sqrt(fabs(s*exp(2)-n*exp(-2)));
		printf("Results of the calculations: t2=%.2lf \n", t2);
	} 

	if(s > fabs(n)) {
		double t2;

		printf("Entered values correspond to s>|n| \n");
		t2 = sqrt(fabs(s - n))*pow(sin(s + n), 3);
		printf("Results of the calculations: t2=%.2lf \n", t2);
	}

	_getch();
}
*/