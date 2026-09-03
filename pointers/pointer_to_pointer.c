#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;
    **q = 100;
    printf("%d",**q);
    printf("%d",a);
    printf("%d",*p);
}