#include<stdio.h>

void reverse_array(int arr[]);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    reverse_array(arr);
    return 0;
}

void reverse_array(int arr[]){
    for(int i = 9;i>=0;i--){
        printf("%d ",arr[i]);
    }
}