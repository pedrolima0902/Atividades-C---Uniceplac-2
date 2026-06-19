#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-47 – Tabuada de um número
	
      int n, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    while(i <= 10);

    return 0;
}
