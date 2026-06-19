#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* Programa JPA 16 - Quantas caixas cabem dentro do caminhão
	
 int n;

    printf("Digite o numero do pedido: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Ganhou refrigerante e sobremesa");
    else if(n % 3 == 0)
        printf("Ganhou refrigerante");
    else if(n % 5 == 0)
        printf("Ganhou sobremesa");
    else
        printf("Nao ganhou premio");

    return 0;
