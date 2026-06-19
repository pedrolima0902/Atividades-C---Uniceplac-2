#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-59 – O Assistente de Direção (GPS Sem Mapa)
	
   char direcao;

    printf("Digite uma letra (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch(direcao)
    {
        case 'N':
            printf("Seguir para o Norte.");
            break;

        case 'S':
            printf("Seguir para o Sul.");
            break;

        case 'L':
            printf("Virar a Leste (Direita).");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).");
            break;

        default:
            printf("Comando invalido! Pare o robo.");
    }

    return 0;
}
