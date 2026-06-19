#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-53 – Confirmar saída com 's'
	
  char sair;

    do
    {
        printf("Executando operacao...\n");
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &sair);

    }
    while(sair != 's' && sair != 'S');

    return 0;
}
