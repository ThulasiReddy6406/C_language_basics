#include<stdio.h>

void doublevalue(int *n);

int main(){
    int m = 10;
    int *t = &m;
    doublevalue(t);
    return 0;
}

void doublevalue(int *n){

    *n = *n*2;
    printf("%d",*n);

}