#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <process.h>

/*
void main() {

	double n, x;
	do { //Used to check correct n value
		printf("Enter n (should be > 0): \n");
		scanf("%lf", &n);

		if (n <= 0) {
			printf("You entered incorrect value \n");
		}
	} while (n<=0);

	double a, b, h;

	do { //Used to enter correct a, b values
		printf("Enter minimum value a: \n");
		scanf("%lf", &a);

		printf("Enter maximum value b (should be > a): \n");
		scanf("%lf", &b);

		if (a == b) {
			printf("a and b cannot be equal  \n");
		}

		if (a > b) {
			printf("a cannot be greater than b \n");
		}

	} while (a >= b);
	
	do { //Used to check correct h value
		printf("Enter step h: \n");
		scanf("%lf", &h);

		if (h>(b-a)) {
			printf("h is greater than the whole range \n");
		}

		if (h == 0) {
			printf("h cannot equal to 0 \n");
		}
	} while (h > (b-a) || h == 0);

	double y;

		printf("     X     |    Y(x)     |     S(x)    |   Y(x)-S(x) | \n");

	for (x = a; x <= b; x=x+h) { 
		y = (exp(x) + exp(-x)) / 2;
		double delta = 0, s = 0;

		double k = 0, i = 1, fakt = 1;
		
			for (k = 0; k <= n; k++) { //Cycle to calculate S(x)
				for (i = 1; i <= 2*k; i++) { //Cycle to calculate (2*k)!
					fakt = fakt*i;
					}
				s = s + pow(x, 2*k) / fakt;
			}

		delta = y - s;
		printf("\n    %.2lf   |   %.5lf   |   %.5lf   |   %.5lf   | \n", x, y, s, delta);
	}
	_getch();
}

/* 
Validations added that are not necessary:
1. a cannot equal to b
2. h cannot be greater than b-a
*/