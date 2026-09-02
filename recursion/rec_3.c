#include<stdio.h>

float percentage(float sci , float math, float san);

int main(){
    float sci,math,san;
    printf("Enter marks of sci out of 100:- ");
    scanf("%f",&sci);
    printf("Enter marks of math out of 100:- ");
    scanf("%f",&math);
    printf("Enter marks of san out of 100:- ");
    scanf("%f",&san);

    float per = percentage(sci,math,san);
    printf("Percentage of 3 subjects is :- %f",per);

    return 0;
}

float percentage(float sci, float math, float san){
    float per = ((sci+math+san)/300)*100;
    return per;
}