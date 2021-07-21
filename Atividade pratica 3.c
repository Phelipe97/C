#include<stdio.h>;
#include<stdlib.h>;

void calc_soma(int* mat_A, int* mat_B, int* mat_C) {//matriz de calculo
	int lin, col;

	printf("Matriz A:\n");//matriz a

	for (lin = 0; lin < 4; lin++) {//laços de repetição
		for (col = 0; col < 4; col++) {
			printf("\t%d", mat_A[lin * 4 + col]);
		}
		printf("\n");
	}

	printf("Matriz B:\n");//matriz b

	for (lin = 0; lin < 4; lin++) {//laços de repetição
		for (col = 0; col < 4; col++) {
			printf("\t%d", mat_B[lin * 4 + col]);
		}
		printf("\n");
	}

	for (lin = 0; lin < 4; lin++) {
		for (col = 0; col < 4; col++) {
			mat_C[lin * 4 + col] = mat_A[lin * 4 + col] + mat_B[lin * 4 + col];
		}
	}

	printf("Matriz C:\n");//matriz c

	for (lin = 0; lin < 4; lin++) {
		for (col = 0; col < 4; col++) {
			printf("\t%d", mat_C[lin * 4 + col]);
		}
		printf("\n");
	}

}

int main() {
	

	int mat_A[4][4];
	int mat_B[4][4];
	int mat_C[4][4];

	int i;
	int j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite o número da matriz A na posição [%d][%d] :", i, j);
			scanf_s("%d", &mat_A[i][j]);
			if (mat_A[i][j] < 0) {
				printf("\nNúmero negativo, encerrando o programa.\n");//numero negativo encerra o programa
				exit(0);
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite o número da matriz B na posição [%d][%d] :", i, j);
			scanf_s("%d", &mat_B[i][j]);
			if (mat_B[i][j] < 0) {
				printf("\nNúmero negativo, encerrando o programa.\n");//numero negativo encerra o programa
				exit(0);
			}
		}
	}

	calc_soma(mat_A, mat_B, mat_C);

	system("pause");
	return 0;
} 
