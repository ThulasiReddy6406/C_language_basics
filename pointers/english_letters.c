#include<stdio.h>

int main(){

    char ch = 'A';
    char *p = &ch;

    for(int i=1;i<=26;i++){
        printf("%c  ",*p);
        (*p)++;
        
    }
}