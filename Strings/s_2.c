#include<stdio.h>
void first_name(char f_name[]);
int main(){
    char f_name[50];
    printf("Enter your first name :- ");
    scanf("%s",&f_name);
    first_name(f_name);
    return 0;
}

void first_name(char f_name[]){
    printf("%s",f_name);

}