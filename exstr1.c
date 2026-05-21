#include <stdio.h>
#include <string.h>
int main()
{
    char op1[15], op2[15];
    int completo;

        printf("Digite uma palavra: ");
            fgets(op1, sizeof(op1), stdin);
            op1[strlen(op1) - 1] = '\0'; // Remove o caractere de nova linha
        printf("digite outra palavra: ");
            fgets(op2, sizeof(op2), stdin);
            op2[strlen(op2) - 1] = '\0'; // Remove o caractere de nova linha
        printf("Ola,%s\n", op1);
            completo = strlen(op1);
        printf("sua palavra tem %d caracteres\n", completo);
            strcat(op1, op2);
            completo = strlen(op1);
        printf("sua palavra tem %d caracteres\n", completo);
        printf("Sua palavra completa e %s\n", op1);
        printf("sua palavra tem %d caracteres\n", completo);

    return 0;
}