#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-50 – Número positivo obrigatório
	
  int num;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

    }
    while(num <= 0);

    printf("Numero valido.");

    return 0;
}
