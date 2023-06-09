#include <stdio.h>
int mdc(int, int);
int mdc(int x, int y){

    int max;

    /*int menorNumero2;
    menorNumero2 = x > y ? y : x;*/

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
}

int main(){

    int x, y;

    printf("Digite os valores: \n");
    scanf("%d %d", &x, &y);

    printf("O mdc de (%d,%d) = %d\n", x, y, mdc(x,y));

    return 0;
}