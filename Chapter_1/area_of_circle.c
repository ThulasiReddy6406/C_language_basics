#include<stdio.h>

int main(){
    float pi = 3.14;
    float radius;

    printf("Enter Radius :- ");
    scanf("%f",&radius);
    printf("Area of circle:- %f",pi*(radius*radius));
    return 0;
}