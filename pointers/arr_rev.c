#include<stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int si = sizeof(arr) / sizeof(arr[0]);
    int *p = &arr[si-1];

    for(int i=si-1;i>=0;i--){
        printf("%d ",*p);
        p--;


    }
    return 0;
}