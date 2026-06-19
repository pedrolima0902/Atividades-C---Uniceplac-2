#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-42 – Quantidade de números ímpares digitados
{
       int num, i = 1, cont = 0;

    while(i <= 10)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if(num % 2 != 0)
            cont++;

        i++;
    }

    printf("Quantidade de impares: %d", cont);

    return 0;
}
