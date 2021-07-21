#include<stdio.h>;
#include<stdlib.h>;
 

struct dados {//estrutura de dados
	char nome[20];
	char cpf[12];
	char telefone[15];
	char email[20];
}; struct dados registro[1];

int main() {//leitor do arquivo
	FILE *arq;
	errno_t err;
	int i;

	err = fopen_s(&arq, "3316094.csv", "w"); //o arquivo
	if(err==0){
		for (i = 0; i < 1; i++) {
			

			printf("nome.....");//registro do nome
			gets_s(registro[i].nome, 20);
			fprintf(arq, "%s;",registro[i].nome);

			printf("cpf.....");//registro de cpf
			gets_s(registro[i].cpf,12);
			fprintf(arq, "%s;", registro[i].cpf);

			printf("telefone.....");//registro de telefone
			gets_s(registro[i].telefone,15);
			fprintf(arq, "%s;", registro[i].telefone);

			printf("email.....");//registro de e-mail
			gets_s(registro[i].email, 20);
			fprintf(arq, "%s;", registro[i].email);

		}
	}
	else {//laços de abertura e fechamento do arquivo
		printf("O arquivo não foi aberto!\n");
	}
	if (arq) {
		err = fclose(arq);
		if (err == 0) {
			printf("o arquivo foi fechado!\n");
		}
		else {
			printf("o arquivo não foi fechado!\n");
		}
	}



	system("pause");
	return 0;
}

