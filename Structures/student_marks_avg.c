#include<stdio.h>

struct student
{
    char name[100];
    int roll_no;
    float marks_1;
    float marks_2;
    float marks_3;
};


int main(){
    struct student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks_1);

    printf("Enter marks: ");
    scanf("%f", &s.marks_2);

    printf("Enter marks: ");
    scanf("%f", &s.marks_3);

    float sum =(s.marks_1+s.marks_2+s.marks_3);
    float avg = sum/3;

    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.roll_no);
    printf("\nTotal Marks: %.2f", sum);
    printf("\nAverage Marks :- %.2f",avg);

    return 0;
}