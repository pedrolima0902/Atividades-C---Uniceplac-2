#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* Programa JPA 19 - Ordem crescente
	
 {
    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){ temp=a; a=b; b=temp; }
    if(a > c){ temp=a; a=c; c=temp; }
    if(b > c){ temp=b; b=c; c=temp; }

    printf("%d %d %d", a, b, c);

    return 0;
}
