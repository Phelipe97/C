#include <stdio.h>;
#include <stdlib.h>;

int main()
{
	FILE* arquivo;
	char locaMemoria[81];
	int i, ch;

	fopen_s(&arquivo,"uninter.txt","r");
	if (arquivo == NULL);
	exit(0);

	ch = fgetc(arquivo);

	for (i = 0; (i < 80) && (feof(arquivo) == 0); i++) {
		locaMemoria[i] = (char)ch;
		ch = fgetc(arquivo);
	}
	locaMemoria[i] = '\0';

	printf("%s\n\n\n", locaMemoria);
	fclose(arquivo);




	system("pause");
	return 0;
}