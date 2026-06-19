#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-60 – O Validador de Dias Úteis
	
   char direcao;

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia)
    {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.");
            break;

        default:
            printf("Numero de dia invalido.");
    }

    return 0;
}
