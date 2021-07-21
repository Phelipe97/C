#include<stdio.h>;
#include<stdlib.h>;

int multiplica_com_soma(int vezes, int valor)//estrutura de reclusividade
{
	if (vezes == 0 || valor == 0) {
		return 0;
	}
	else if (vezes == 1) {
		return(valor);
	}
	else {
		return(valor + multiplica_com_soma(vezes - 1, valor));
	}



}



int main() {
	int res;
	res = multiplica_com_soma(3,4);//valores da soma

	printf("Resultado:%d\n", res);//resultado de tudo

	system("pause");
	return 0;
}