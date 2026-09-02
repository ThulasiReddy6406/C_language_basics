#include<stdio.h>

float contemp(int celcius);

int main(){
    float fah = contemp(37);
    printf("Fahernhit is %f",fah);

    return 0;
}


float contemp(int celcius){
    float fah = (celcius*9.0/5.0)+32;
    return fah;
}