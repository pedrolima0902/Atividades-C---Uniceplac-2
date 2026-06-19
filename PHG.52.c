#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-52 – Soma até o número ser múltiplo de 10
	
  int num, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;

    }
    while(num % 10 != 0);

    printf("Soma total = %d", soma);

    return 0;
}
