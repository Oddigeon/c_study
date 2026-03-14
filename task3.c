#include <stdio.h>

int fib(int a);

int main()
{
    int n;
    char b;

    if (scanf("%d%c", &n, &b) != 2 || b != '\n' || n < 0){
        printf("n/a");

        return 1;
    }
    else{
        printf("%d", fib(n));
    }



}

int fib(int a){
    if (a == 0 || a == 1){
        return a;
    }
    else{
        return fib(a - 1) + fib(a - 2);
    }
}