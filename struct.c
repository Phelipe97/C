#include <stdio.h>
#include <stdlib.h>

struct Funcionario
{
	int matricula;
	float salario;

}; struct Funcionario tecnico;


int main()
{

	printf("Digite a matricula do funcionario:");
	scanf_s("%d", &tecnico.matricula);

	printf("\nDigite o salario do funcionario:");
	scanf_s("%f", &tecnico.salario);

	printf("\n\nDADOS DO FUNCIONARIO\n");

	printf("\n\nMatricula do funcionario:%d\n", tecnico.matricula);

	printf("\n\nSalario do funcionario:.2%f\n\n", tecnico.salario);

	system("pause");
	return 0;
}