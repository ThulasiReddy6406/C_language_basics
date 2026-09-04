#include<stdio.h>

void count_odd(int arr[]);
int count = 0;


int main(){

    int arr[] = {1,3,5,7,9,11,13,15,17,19,21,23};
    count_odd(arr);
    printf("%d",count);

    return 0;
}

void count_odd(int arr[]){

    for(int i=0;i<=11;i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
}