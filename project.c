#include<stdio.h>;
#include<stdlib.h>;


int main(void)
{
	struct calendario {
		int* dia;
		int* mes;
		int* ano;
	}; struct calendario atual;

	int diaT = 31;
	int mesT = 12;
	int anoT = 2018;

	atual.dia = &diaT;
	atual.mes = &mesT; 
	atual.ano = &anoT;

	printf("endereço da variavel diaT=%p\n", &diaT);
	printf("endereço da variavel diaT com ponteiro=%p\n\n\n", atual.dia);

	printf("endereço da variavel mesT=%p\n", &mesT);
	printf("endereço da variavel mesT com ponteiro=%p\n\n\n", atual.mes);

	printf("endereço da variavel anoT=%p\n", &anoT);
	printf("endereço da variavel anoT com ponteiro=%p\n\n\n", atual.ano);


	system("pause");
}