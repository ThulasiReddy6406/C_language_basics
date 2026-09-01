#include<stdio.h>

int main(){

    int sum = 0;

    for(int i=5;i<=50;i++){
        if(i==5 || i==50){
            continue;
        }
        sum = sum + i;
    }
    printf("Total sum is :- %d",sum);
}