#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n[7];//recebe os digitos
	int i,i2;
	int* pont;//ponteiro
	pont = &i2;

	for (i = 0; i <= 7; i++) {//Laço de repetição
		printf("Digite um numero:");
		scanf_s("%d", n);
		*pont = i2 + n[i];

	}

	printf("A soma dos numeros e %d.\n\n",*pont);
	
	system("pause");
	return 0;
}