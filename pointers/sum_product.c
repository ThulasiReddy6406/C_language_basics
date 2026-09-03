#include<stdio.h>

void calc(int a, int b, int *sum , int *product);

int main(){
    int a= 25 , b=45;
    int *sum;
    int *product;
    calc(a,b,&sum,&product);

    return 0;
}

void calc(int a, int b, int *sum , int *product){
    *sum = a +b;
    *product = a * b;
    printf("The sum is :- %d \n",*sum);
    printf("The product is :- %d",*product);
}