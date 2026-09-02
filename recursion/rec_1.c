#include<stdio.h>

int fact(int n);

int main(){
    int F = fact(5);
    printf("fact :- %d",F);

    return 0;
}

int fact(int n){
    if(n==1){
        return;
    }
    int f =fact(n-1)*n;
    return f;
}