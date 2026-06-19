#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-48 – Menu com opção de sair
	
      int opcao;

    do
    {
        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            printf("Voce escolheu a mensagem!\n");
        }

    }
    while(opcao != 2);

    return 0;
}
