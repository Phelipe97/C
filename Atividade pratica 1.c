#include <stdio.h>;
#include <stdlib.h>;
//  estrutura de dados. 
struct dados {
	char nome[25];
	float salario;
}; 

int main()
{
	struct dados func,*p_func;

	p_func = &func;//ponteiros da estrutura
	
	printf("\nDigite o nome do funcionario:");
	fgets(func.nome,24,stdin);

	
	printf("\nDigite o salario do funcionario:");
	scanf_s("%f", &func.salario);


	//as aliquotas e percentuais de salario
	if (p_func->salario > 4664.68) 
	{
		printf("O Nome e %s\n",func.nome);
		printf("O Salario e %.2f\n", func.salario);
		printf("A Aliquota e:27,5 porcento\n");
		printf("O valor devido de imposto e:%.2f\n", p_func->salario *0.275);
	}
	
	else if (p_func->salario > 3751.06 )
	{
		printf("O Nome e %s\n", func.nome);
		printf("O Salario e %.2f\n", func.salario);
		printf("A Aliquota e:22,5 porcento\n");
		printf("O valor devido de imposto e:%.2f\n", p_func->salario * 0.225);
	}

	else if (p_func->salario > 2826.66 )
	{
		printf("O Nome e %s\n", func.nome);
		printf("O Salario e %.2f\n", func.salario);
		printf("A Aliquota e:15,0 porcento\n");
		printf("O valor devido de imposto e:%.2f\n", p_func->salario * 0.150);
	}

	else if (p_func->salario > 1903.99 )
	{
		printf("O Nome e %s\n", func.nome);
		printf("O Salario e %.2f\n", func.salario);
		printf("A Aliquota e:7,5 porcento\n");
		printf("O valor devido de imposto e:%.2f\n", p_func->salario * 0.75);
	}

	else if (p_func->salario < 1903.99 )
	{
		printf("O Nome e %s\n", func.nome);
		printf("O Salario e %.2f\n", func.salario);
		printf("A Aliquota e:isento\n");
		printf("O valor devido de imposto e:,0\n");
	}






	system("pause");
	return 0;
}