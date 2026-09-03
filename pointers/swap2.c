#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int n = 5 , m = 6 ;
    swap(&n,&m);
    printf("A IS :- %d || b IS :-%d",n,m); 
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("A IS :- %d || b IS :-%d",*a,*b);
}