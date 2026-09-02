#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter number : -");
    scanf("%d",&n);
    int f = fact(n);
    printf("Factorial of %d :- %d",n,f);
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int fac = fact(n-1)*n;
    return fac; 
}