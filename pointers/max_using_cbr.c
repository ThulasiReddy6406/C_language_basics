#include<stdio.h>

void max(int a,int b , int *result);

int main(){
    int a =5;int b=9;
    int result;
    max(a,b,&result);
    printf("The max is %d",result);
    return 0;
}

void max(int a, int b, int * result){
    if(a>b){
        *result = a;
    }else{
        *result = b;
    }
}