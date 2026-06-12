#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s",nome);

    if (strcmp(nome, "Professor") == 0){
    printf("Bem-vindo Professor!!");
    }else{
        printf("Bem-vindo Estudante!");
    }

return 0;
}