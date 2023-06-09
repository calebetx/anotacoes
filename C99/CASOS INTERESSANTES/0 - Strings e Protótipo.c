#include <stdio.h>

/*int main(){  //strings em lista

    char A[3][50] = {"I", "II", "III"};

    printf("%s", A[2]);

    return 0;
}*/

///////////////////////////////////////////////////////

int soma(int, int); // protótipo da função

int main() {
    int x = 2, y = 3;
    int z = soma(x, y);
    printf("O resultado da soma eh %d\n", z);
    return 0;
}

int soma(int a, int b) {
    return a + b;
}

//////////////////////////////////////////////////////

/*
void f(int); //error
void f(int x){
    printf("%d", x + 1);}
int main(){
    int n = f(10);
    printf("O número eh %d", n);}*/