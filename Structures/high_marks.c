#include<stdio.h>

typedef struct student{
    char name[100];
    int roll_no;
    float marks;
}S;

int main(){
    S s1={"Thulasi",23,90.8};
    S s2={"Rakshita",45,97.3};
    if(s1.marks > s2.marks){
        printf("-------HIGHER MARKS---------\n");
        printf("Name :- %s\n",s1.name);
        printf("Roll_no :- %d\n",s1.roll_no);
        printf("Marks :- %f\n",s1.marks);
    }else{
        printf("-------HIGHER MARKS---------\n");
        printf("Name :- %s\n",s2.name);
        printf("Roll_no :- %d\n",s2.roll_no);
        printf("Marks :- %f\n",s2.marks);
    }
    return 0;
}