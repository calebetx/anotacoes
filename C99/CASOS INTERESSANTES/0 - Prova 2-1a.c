//a)
/*
void main(){
    int a,b,*c;
    a = 3;
    b = 4;
    c = &a;
    printf("%d\n",*c);
    b++;
    *c = a+2;
    printf("%d %d",a,b);
}*/


//b)
/*
void main(){
    int a,b, *c;
    a = 4;
    b = 3;
    c = &a;
    printf("%d\n", *c);
    *c = *c +1;
    printf("%d\n", *c);
    c = &b;
    printf("%d\n", *c);
    b = b+4;
    printf("%d %d %d",a,b,*c);
}
*/


//c)
/*
void main(){
    int a,b,*c,*d,*f;
    a = 4; // <= *c
    b = 3; // <= *d
    c = &a; // 4
    d = &b; // 3
    *c /= 2; // *c = 2
    f = c; // *f = 2
    c = d; // *c = 3
    d = f; // *d = *f = 2
    printf("%d %d %d %d %d",*c, *d, a, b);
}
*/

//d)
/*
int calcula(int);
void main()
 {
 int a,b,c;
 char d;
 a=1;b=2;c=3;d='A';
 a+=bc;
 d=(a>7)?d-1:d+1;
 b = calcula(b);
 c = calcula(calcula(a));
 a = c++;
 printf("%d - %d - %d - %c\n",a,b,c,d);
 }*/

/*
int calcula(int x)
    {
    int i;
    if ((x=x*2)>5) return(x+3);
    for(i=0;i<10;i++)
    {
    if (i<5) continue;
    if (x>8) break;
    x+=2;
    }
    return(x);
    }*/