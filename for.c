#include <stdio.h>;
#include <stdlib.h>;

int imprimeN(int inicio, int sfim);

int main() {
	int comeco, sfim, i;

	comeco = 1;
	sfim = 21;

	printf("FUNCAO RECURSSIVA\n ");
	imprimeN(comeco, sfim);


	printf("\n\n");

	printf("FUNCAO INTERATIVA FOR\n ");
	for (comeco; i < sfim; i++); {
		printf("%d", i);
	}
	printf("\n\n");

	printf("FUNCAO INTERATIVA WHILE\n ");
	while (comeco < sfim) {
		printf("%d", comeco);
		comeco++;
	}

	printf("\n\n");



	system("pause");
	return 0;
}


int imprimeN(int inicio, int sfim);{
	if (comeco < fim)
	{
		printf("%d", comeco);
		imprimeN(comeco + 1, sfim);
	}
}