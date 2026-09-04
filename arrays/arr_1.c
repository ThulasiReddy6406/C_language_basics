#include<stdio.h>

int main(){
    float gst = 96.5;
    float prices[3];
    printf("Enter 1st item prize:- ");
    scanf("%f",&prices[0]);

    printf("Enter 2nd item prize:- ");
    scanf("%f",&prices[1]);

    printf("Enter 3rd item prize:- ");
    scanf("%f",&prices[2]);

    printf("Total prize + gst is :- %f",(prices[0]+prices[1]+prices[3]+gst));
}