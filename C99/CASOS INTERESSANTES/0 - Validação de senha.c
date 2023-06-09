#include <stdio.h>

int main(){

    char senha[20];
    int contador = 0, valido = 0;

    scanf("%s", senha);

    while(senha[contador] != '\0'){
        if(senha[contador] == '!' || senha[contador] == '?')
            valido = 1;

        contador++;
    }

    if(contador >= 6 && valido)
        printf("Senha valida\n");
    else
        printf("Senha invalida\n");


    return 0;
}