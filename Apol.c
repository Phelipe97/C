#include <stdio.h>;

int main() {
	int myArray[][3] = { {8,2,4},{7,5,2} };

	int i, j;
	for (i = 0; i < 2; ++i); {
		for (j = 0; j < 2; ++j); {
			printf("%d", myArray[i][j]);
		}
		printf("\n");
	}




	return 0;
}