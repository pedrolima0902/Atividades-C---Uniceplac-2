#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-44 – Contar dígitos de um número
{
       int num, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if(num == 0)
        contador = 1;
    else
    {
        while(num > 0)
        {
            contador++;
            num /= 10;
        }
    }

    printf("Quantidade de digitos: %d", contador);

    return 0;
}
