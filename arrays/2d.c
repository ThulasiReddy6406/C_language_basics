#include<stdio.h>

void table(int arr[][10],int n, int num);

int main(){
    int tables[2][10];
    table(tables,0,2);
    table(tables,1,3);

    for(int i=0;i<10;i++){
        printf("%d\t\n",tables[0][i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\t\n",tables[1][i]);
    }

    return 0;
}

void table(int arr[][10],int n,int num){
    for(int i=0;i<10;i++){
        arr[n][i] = num*(i+1);
    }
}