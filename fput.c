#include <stdio.h>;
#include <stdlib.h>;


int main() {
	FILE* arquivo;
	errno_t err;
	int numero;

	err = fopen_s(&arquivo, "unninter.txt", "w");

	if (err == 0) {
		printf("Digite um numero inteiro:");
		do {
			numero = getchar();
			fputc(numero, arquivo);
		} while (numero = !'\n'); 
	}
	else {
		printf("erro!arquivo nao aberto\n\n");
	}
	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("\narquivo fechado!\n\n");
		}
		else {
			printf("\narquivo não foi fechado\n\n");
		}
	}





	system("pause");
	return 0;
}