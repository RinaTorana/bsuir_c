#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {

	int ArrayA [5][5];
	int m, n;

	printf("Enter quantity of raws: ");
	scanf("%d", &n);

	printf("\nEnter quantity of columns: ");
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		printf("Enter element of raw [%d]: \n", i);
		for (int j = 0; j < m; j++) {
			printf("[%d][%d]= ", i, j);
			scanf("%d", &ArrayA[i][j]);
		}
		printf("\n");
	}
	printf("ArrayA is created \n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("[%d][%d]= %d \t", i, j, ArrayA[i][j]);
		}
		printf("\n");
	}
	_getch();
}