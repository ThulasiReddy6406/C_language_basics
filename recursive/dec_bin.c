#include<stdio.h>

void binary(int n);

int main(){
    binary(13);

    return 0;
}

void binary(int n){
    if(n==0){
        return ;
    }
    binary(n/2);
    printf("%d",n%2);

}