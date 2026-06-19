#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-37 – Soma de números até digitar zero
{
    int num, soma = 0;

    printf("Digite numeros (0 para sair):\n");
    scanf("%d", &num);

    while(num != 0)
    {
        soma += num;
        scanf("%d", &num);
    }

    printf("Soma = %d", soma);

    return 0;
}
