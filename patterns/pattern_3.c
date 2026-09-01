#include<stdio.h>

int main(){
    int i,j;

    for(int i=1;i<=2;i++){
        for(int j=1;j<=10;j++){
            printf("%d X %d = %d \n",i,j,i*j);
        }
        printf("\n");
    }
}