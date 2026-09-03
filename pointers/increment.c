#include<stdio.h>

void increment(int *n);

int main(){
    int m = 5;
    increment(&m);
    printf("%d",m);
    return 0;
}

void increment(int *n){
    *n = *n + 1;
    printf("%d \n",*n);
}