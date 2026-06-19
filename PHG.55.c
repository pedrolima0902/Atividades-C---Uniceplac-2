#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-55 – Ler números e mostrar o maior
	
 int num;
    int maior = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > maior)
        {
            maior = num;
        }

    }
    while(num >= 0);

    printf("Maior numero informado: %d", maior);

    return 0;
}
