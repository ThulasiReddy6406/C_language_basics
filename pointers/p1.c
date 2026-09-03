#include<stdio.h>

int main(){

    int age = 10;
    int *ptr = &age;
    printf("%p \n",&age);
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n",&ptr);
    printf("%d \n",*ptr);
    printf("%d \n",age);
    printf("%d \n",*(&age));


    return 0;
}