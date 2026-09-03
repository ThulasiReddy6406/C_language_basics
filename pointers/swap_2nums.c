#include<stdio.h>

int main(){

    int a,b;

    a = 5;
    b = 4;

    int temp = b;
    b = a;
    a = temp;

    printf("a:- %d",a);
    printf("B:- %d",b);

    return 0;
}