#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-41 – Número primo com while
{
      int num, i = 2, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1)
        primo = 0;

    while(i < num)
    {
        if(num % i == 0)
        {
            primo = 0;
            break;
        }

        i++;
    }

    if(primo)
        printf("Numero primo");
    else
        printf("Nao e primo");

    return 0;
}
