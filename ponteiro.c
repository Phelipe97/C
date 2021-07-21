#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x,*y;

	printf("Digite um numero inteiro:");
	scanf_s("%d", &x);

	y= &x;

	printf("o endereço da variavel x e:%p\n", &x);
	printf("o endereço da variavel x e:%p\n", y);
	

	system("pause");
	return 0;
}