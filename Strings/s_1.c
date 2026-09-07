#include<stdio.h>

void printstring(char arr[]);
int main(){

    char f_n[] = "Nani";
    char l_n[] = "Reddy";
    printstring(f_n);
    printstring(l_n);

    return 0;
}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
}