#include <stdio.h>
#include <string.h>

int main() {
    char caract = 'Z';
    char* caractPtr = &caract;
    printf("%d\n", &caract);
    printf("%d\n", caractPtr);
    printf("%d\n", *caractPtr);
}
// ----------------------------------------

// º Converte para caixa alta uma string. OBS: Caracteres menores que 96 são MAIÚSCULAS, e caracteres maiores que 96 são MINÚSCULAS
// MAIÚSCULAS: 65 ~ 90
// MINÚSCULAS: 97 ~ 122
// int main(){
//     char nome[10] = "Gabriel";

//     for(int i = 0; nome[i] != '\0'; i++){
//         if(nome[i] > 96 && nome[i] < 123){
//             nome[i] -= 32;
//         }
//     }

//     printf("%s", nome);

// }
// ----------------------------------------

// º Conta quantos caracteres tem a string, sem contar com o '\0'
// Obs: É interessante utilizar ponteiros por uma questão de eficiência e memória, uma vez que quando passa o array para a função, ele passa sendo uma CÓPIA, logo, implicando em tempo
// int meu_strlen(char *str){

//     int StrLen = 0;
//     for(; *str != '\0'; str++){
//         StrLen++;
//     }

//     return StrLen;
// }

// int main(){

//     char nome[] = "Gabriel";

//     printf("%d\n", meu_strlen(nome));
//     printf("%s\n", nome);

//     return 0;
// }
// --------------------------------------------
// º Concatena duas strings desde que a primeira tem espaço suficiente

// TENTATIVA 1(Não deu)
// void meu_strcat(char *str1, const char *str2){

//     // Conta quantos espaços comporta a string(CONSERTAR!!)
//     int StrLen1 = 0;
//     do{
//         StrLen1++;
//         str1++;
//     }while(*str1 != '\0');
//     str1 -= StrLen1;

//     // Conta o tamanho da string
//     int StrLen1OCUP = 0;
//     for(; *str1 != '\0'; str1++){
//         StrLen1OCUP++;
//     }
//     str1 -= StrLen1OCUP;

//     int StrLen2OCUP = 0;
//     for(; *str2 != '\0'; str2++){
//         StrLen2OCUP++;
//     }
//     str2 -= StrLen2OCUP;

//     printf("%d", StrLen1);
//     printf("%d", StrLen1OCUP);
//     printf("%d", StrLen2OCUP);
//     if (StrLen1OCUP + StrLen2OCUP < StrLen1){
//         str1 += StrLen1;
//         // Concatena os caracteres da segunda string na primeira
//         while (*str2 != '\0') {
//             *str1 = *str2;
//             str1++;
//             str2++;
//         }

//         *str1 = '\0'; 
//     }

// }

// int main(){

//     char nome1[20] = "Gabriel";
//     const char nome2[10] = "Alo";

//     meu_strcat(nome1, nome2);
//     printf("%s", nome1);

//     return 0;
// }

//TENTATIVA 2(DEU) mas sem condição de se há espaço para a soma
void meu_strcat(char *str1, const char *str2) {
    // Encontra o final da primeira string
    printf("%d\n", sizeof(str1) / sizeof(str1[0]));

    int StrTam1 = 0;
    do{
        StrTam1++;
        str1++;
    }while(*str1 != '\0');
    printf("%d\n", StrTam1);
    str1 -= StrTam1;

    int StrTam2 = 0;
    do{
        StrTam2++;
        str2++;
    }while(*str2 != '\0');
    printf("%d\n", StrTam2);
    str2 -= StrTam2;

    int valido = 0;
    if(StrTam1 >= StrTam1 + StrTam2);

    while(*str1 != '\0') {
        str1++;
        printf("%c", *str1);
    }

    // Concatena os caracteres da segunda string na primeira
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0'; // Adiciona o caractere nulo ao final da primeira string
}

int main() {
    char nome1[20] = "Gabriel"; // 7
    const char nome2[10] = "Alo"; // 3

    meu_strcat(nome1, nome2);
    printf("%s\n", nome1);

    return 0;
}
// --------------------------------------------------------------