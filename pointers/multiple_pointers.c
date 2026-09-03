#include<stdio.h>

void operations(int *a,int *b, int *sum, int *product);

int main(){
    int a = 5,b=6;
    int sum;
    int product;
    operations(&a,&b,&sum,&product);
    printf("The sum is :- %d \n",sum);
    printf("The product is :- %d \n",product);
    printf("A is :- %d \n",a);
    printf("B is :- %d",b);
    return 0;
}

void operations(int *a,int *b, int *sum, int *product){
    *sum = *a + * b ;
    *product = *a * *b;
    *a = *a+10;
    *b = *b*2;
}