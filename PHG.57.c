#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-57 – A Central do Brinquedo Eletrônico
	
   char cor[20];

    printf("Digite a cor: ");
    scanf("%s", cor);

    if(strcmp(cor, "Verde") == 0)
        printf("Vamos brincar la fora!");
    else if(strcmp(cor, "Amarelo") == 0)
        printf("Estou ficando com soninho...");
    else if(strcmp(cor, "Vermelho") == 0)
        printf("Estou com fome, hora do lanche!");
    else
        printf("Cor desconhecida");

    return 0;
}
