#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main() {
	
	print("\n"*********************************************** ");
	print("n* Aluno: Pedro Henrique Garcês Lima - RA 0011947* "); 
	print("\n"*********************************************** ");
	
	
	
	* Aluno: Pedro Henrique Garces Lima - RA 0011947
	* Programa JPA 18 - Sensor do Parque Temático
	
  {
    char usuario[20];
    char senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(usuario, "admin") == 0 &&
       strcmp(senha, "1234") == 0)
        printf("Acesso permitido");
    else
        printf("Acesso negado");

    return 0;
}
