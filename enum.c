#include <stdio.h>;
#include <stdlib.h>;

enum semana { domingo = 1, segunda, terca, quarta, quinta, sexta, sabado };

int main() {

	enum semana a, b, c, d, e, f, g;

	a = domingo;
	b = segunda;
	c = terca;
	d = quarta;
	e = quinta;
	f = sexta;
	g = sabado;

	printf("DIAS DA SEMANA\n\n");

	printf("identificador de domingo =%d\n", a);

	printf("identificador de segunda =%d\n",b);

	printf("identificador de terça =%d\n", c);

	printf("identificador de quarta =%d\n",d);

	printf("identificador de quinta =%d\n", e);

	printf("identificador de sexta =%d\n", f);

	printf("identificador de sabado =%d\n", g);



	system("pause");
	return 0;
}

