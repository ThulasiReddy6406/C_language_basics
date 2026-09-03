#include <stdio.h>

int fibnocii(int n);

int main()
{
    int f = fibnocii(7);

    printf("%d", f);

    return 0;
}

int fibnocii(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    int fib = fibnocii(n-1) + fibnocii(n-2);

    return fib;
}