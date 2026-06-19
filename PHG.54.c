#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-54 – Validar número entre 1 e 5
	
  int num;

    do
    {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &num);

    }
    while(num < 1 || num > 5);

    printf("Numero valido.");

    return 0;
}
