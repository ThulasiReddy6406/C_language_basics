#include<stdio.h>

int main(){
    int n,position;
    int arr[6] = {10, 20, 30, 40, 50};
    printf("Enter number :- ");
    scanf("%d",&n);
    printf("Enter position from 0 - 6 :- ");
    scanf("%d",&position);

    for(int i=5;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = n;
    for(int i=0; i<6 ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}