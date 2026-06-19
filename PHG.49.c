#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-49 – Pedir senha até acertar
	
  int senha;

    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

    }
    while(senha != 1111);

    printf("Acesso liberado!");

    return 0;
}
