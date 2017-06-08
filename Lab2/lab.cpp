#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <process.h>
#define Pi 3.1415926

void main() {

	setlocale(LC_CTYPE, "Rus");
	double a, z1, z2;

	printf("??????? ?");
	scanf(%lf, &a);

	z1 = sin(Pi / 2 + 3a) / (1 - sin(3a - Pi));
	z2 = ctg(5 / 4 * Pi + 3 / 2 * a);

	printf("\n ?????????? ??????????: z1=%.4lf z2=%.4lf\n"), z1;
	getch();

}
