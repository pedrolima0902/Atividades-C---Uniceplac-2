#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* JPA-58 – Calculadora de 4 Operações
	
   float num1, num2;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao (+ - * /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Resultado = %.2f", num1 + num2);
            break;

        case '-':
            printf("Resultado = %.2f", num1 - num2);
            break;

        case '*':
            printf("Resultado = %.2f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Resultado = %.2f", num1 / num2);
            else
                printf("Divisao por zero nao permitida");
            break;

        default:
            printf("Operacao matematica nao reconhecida");
    }

    return 0;
}
