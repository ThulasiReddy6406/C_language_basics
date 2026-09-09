#include<stdio.h>

struct student
{
    char name[100];
    int roll_no;
    float marks;
};


int main(){
    struct student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.roll_no);
    printf("\nMarks: %.2f", s.marks);
}