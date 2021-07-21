#include <stdio.h>;
#include <stdlib.h>;

#define QTD 4
#define SAIR exit(1)

int main()
{
	int *px;

	px = (int*)calloc(QTD, sizeof(int));
	if (px == NULL) {
		printf("ERRO! Não tem memoria suficiente.");
		SAIR;
	}

	int i;

	printf("DIGITAR OS DADOS PARA O VETOR DE 4 POSICOES\n\n");
	for (i = 0; i < 4; i++) {
		printf("Digite px[%d]:", i);
		scanf_s("%d", &px[i]);
	}

	printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
	for (i = 0; i < 4; i++); {
		printf("Posicao pc[%d]=%d\n", i, px[i]);
	}

	printf("\n");

	free(px);





	system("pause");
	return 0;
}