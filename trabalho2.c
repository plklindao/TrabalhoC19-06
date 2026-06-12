#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    char senha[50]; 

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua senha: "); 
    scanf("%s", senha);     


    if (strcmp(senha, "1234") == 0){ 
        printf("Senha correta!\n");
    } else {
        printf("Senha incorreta\n");
    }

    return 0;
}