/*
Calcula um valor N qualquer da sequência de Fibonnaci.
Ex: fib(30), fib(50)...
*/

#include <stdio.h>

int fibonacci( int n ){
    if( n == 1 )
        return 0;
    else{
        if( n == 2 )
            return 1;
        else
            return fibonacci( n - 1 ) + fibonacci( n - 2 );
    }
}

int main(){
    int n;

    printf("Digite qual valor da sequencia de fibonacci deseja. Ex: fib(30) - ");
    scanf("%d", &n);

    printf("fib(%d) = %d\n", n, fibonacci(n));
    return 0;
}