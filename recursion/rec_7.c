#include<stdio.h>
int sum = 0 ;

int  print(int n){
    if(n==6){
        return sum;
    }
   
    // printf("%d \n",n);
    sum += n;

    print(n+1);
    
}

int main(){
    int s = print(1);
    printf("The total sum is :- %d",s);
    return 0;
}