/*#include <stdio.h>

int main(){

    int a, x, y, resto;

    printf("Digite os numeros (x,y): \n");
    scanf("%d %d", &x, &y);

    for(a = 1; a > 0; a++){
        resto = (x * a) % y;
        if(resto == 0)
            break;
    }

    printf("O MMC de (%d,%d) = %d", x, y, (x * a));

    return 0;
}*/

#include <stdio.h>

int mmc(int x, int y){

    int resto;

    for(size_t i = 1; i > 0; i++){
        resto = (x * i) % y;
        if(resto == 0)
            return (x * i);
    }
}

int main(){

    int x, y;

    printf("Digite os numeros (x,y): \n");
    scanf("%d %d", &x, &y);

    printf("O MMC de (%d,%d) = %d", x, y, mmc(x,y));

    return 0;
}