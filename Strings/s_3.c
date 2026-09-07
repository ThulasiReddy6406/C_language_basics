#include<stdio.h>
void first_name(char f_name[]);
void last_name(char l_name[]);
int main(){
    char f_name[50];
    char l_name[50];
    printf("Enter your first name :- ");
    scanf("%s",&f_name);
    printf("Enter your last name :- ");
    scanf("%s",&l_name);
    first_name(f_name);
    last_name(l_name);
    return 0;
}

void first_name(char f_name[]){
    printf("%s ",f_name);

}
void last_name(char l_name[]){
    printf("%s",l_name);
}