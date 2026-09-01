#include<stdio.h>

int main(){

    int n;
    int sum = 0;

    while(1){
        printf("Enter a number to sum and 0 to stop add:- ");
        scanf("%d",&n);

        sum = sum+n;
        
        if (n == 0 )
        {
            break;
        }
    }
    printf("Thank you \n");
    printf("Total sum is :- %d",sum);

    return 0;
}