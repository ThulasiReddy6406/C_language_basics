#include<stdio.h>

int add(int *a,int *b);

int main(){
    int x = 5;
    int y = 7;
    printf("SUM OF X AND Y IS :- %d  \n",add(&x,&y));
    printf("Sum of x and y is:- %d  \n",(x+y));
}

int add(int *a, int *b){
    return *a + *b;
}