#include<stdio.h>

int count = 0;

void length(char name[]);

int main(){

    char name[100];

    fgets(name, 30, stdin);

    length(name);

    printf("%d", count-1);

    return 0;
}

void length(char name[]){

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
}