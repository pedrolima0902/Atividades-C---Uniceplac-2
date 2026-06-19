#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-56 – O Menu do Fast-Food Digital
	
  int opcao;

    printf("Digite o numero do combo (1 a 4): ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00");
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 4.");
    }

    return 0;
}
