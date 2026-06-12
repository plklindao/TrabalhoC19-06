#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s",nome);

    printf("Quantidade de letras: %lu\n", strlen(nome));
}