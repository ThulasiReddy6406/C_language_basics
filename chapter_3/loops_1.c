#include<stdio.h>

int main(){

    int n;
    int sum =0;
    printf("ENTER A NUMBER:-  ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        sum = sum += i;
    }
    printf("The total sum upto %d is :- %d",n,sum);
}