#include <stdio.h>

int meu_strlen (char[]);
int meu_strlenPtr (char *);

int main () {

    char nome[] = "Gui Gui";
    char *nomePtr = nome;

    //printf("Tamanho da String sem Ponteiro: %d\n",meu_strlen(nome));
    //printf("Tamanho da String com Ponteiro: %d\n",meu_strlenPtr(nomePtr)); //Pode usar nomePtr

    nomePtr = nomePtr + 4;
    printf("%c", *nomePtr);

    return 0;
}

int meu_strlen (char nome[]) {

    int tamanho = 0;

    while (nome[tamanho] != '\0'){

        tamanho++;
    }
    return tamanho;
}

int meu_strlenPtr(char *Ptr) {

    int tamanho = 0;

    while (*Ptr != '\0') {

        tamanho++;
        Ptr++;
    }
    return tamanho;
}