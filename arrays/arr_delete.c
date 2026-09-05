#include<stdio.h>

int main(){
    int position = 3;
    int arr[5] = {10,20,30,40,50};

    for(int i=position;i<5;i++){
        arr[i] = arr[i+1];
    }

    for(int i=0;i<4;i++){
        printf("%d r",arr[i]);
    }

    return 0;
}