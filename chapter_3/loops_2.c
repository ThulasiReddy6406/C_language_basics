#include<stdio.h>

int main(){

    int n;
    int sum =0;
    printf("ENTER A NUMBER:-  ");
    scanf("%d",&n);
    
    int i =1;
    while(i<=n){
        sum = sum += i;
        i++;
    }
    printf("The total sum upto %d is :- %d",n,sum);
}