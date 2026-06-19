#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* Programa JPA-25 – Notas e aprovação
{
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if(media >= 7)
        printf("Aprovado");
    else if(media >= 5)
        printf("Recuperacao");
    else
        printf("Reprovado");

    return 0;
}
