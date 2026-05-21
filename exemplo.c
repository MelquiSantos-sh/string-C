#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char sobrenome[50];
    int tam;

  
        printf("Digite seu nome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strlen(nome) - 1] = '\0'; // Remove o caractere de nova linha
        printf("digite seu sobrenome: ");
            fgets(sobrenome, sizeof(sobrenome), stdin);
            sobrenome[strlen(sobrenome) - 1] = '\0'; // Remove o caractere de nova linha
        printf("Ola,%s\n", nome);
            tam = strlen(nome);
        printf("seu nome tem %d caracteres\n", tam);
            strcat(nome, sobrenome);
            tam = strlen(nome);
        printf("seu nome tem %d caracteres\n", tam);

    return 0;
}
