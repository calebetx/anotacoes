/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 1º Questão
/*int main(){

    char senha[20];
    int validacao = 0;

    printf("Digite a senha\n");
    scanf("%[^\n]", senha);

    int contador = 0;
    int espaco_branco = 0;

    while(senha[contador] != '\0'){
        if(senha[contador] == '!' || senha[contador] == '?')
            validacao = 1;
        if(senha[contador] == ' ')
         espaco_branco = 1;
        contador++;
    }

    if(contador < 6 || !validacao || espaco_branco == 1)
        printf("Senha invalida\n");
    else
        printf("Senha valida\n");

    return 0;
}*/

// 2º Questão
/*int mdc(int, int);
int mdc(int x, int y){

    int max;
    int menorNumero;
    if(x > y)
        menorNumero = y;
    else
        menorNumero = x;


    for (size_t i = 2; i <= menorNumero; i++)
    {
        if(x % i == 0 && y % i == 0)
            max = i;
    }

    return max;
}*/

// 3º Questão
/*float potencia(float x, float y){
    int pot = 1;
    int Ny = abs(y);

    for (size_t i = 0; i < Ny; i++)
    {
        pot = pot * x;
    
    }
    if(y > 0)
        return pot;
    else
        return (1/pot); 
}*/

// 4º Questão
/*float potencia(float x, float y){
    if(y == 0)
        return 1;
    else
        return x * potencia(x,y-1);
}
*/