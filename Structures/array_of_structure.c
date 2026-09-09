#include<stdio.h>

typedef struct student{
    char name[100];
    int roll_no;
    float marks;
}S;


int main(){
    S student[5];

    for(int i=0;i<5;i++){
        printf("Enter details of student %d ",i+1);
        printf("Student Name :- ");

        scanf("%s",student[i].name);

        printf("Roll No :- ");
        scanf("%d", &student[i].roll_no);

        printf("Marks :- ");
        scanf("%f", &student[i].marks);

    }
    printf("\n--------------Student details --------------------\n");
    for(int i=0;i<5;i++){
        printf("\n Student Name is :- %s",student[i].name);
        printf("\n Student Roll_no is :- %d",student[i].roll_no);
        printf("\n Student Marks :- %.2f",student[i].marks);
        printf("\n------------------\n");
    }

    float highest_marks = 0;
    for(int i=0;i<5;i++){
        if(student[i].marks > highest_marks){
        highest_marks = student[i].marks;
        }
    }
    printf("High marks :- %.2f",highest_marks);
    printf("\n---------\n");

    for(int i=0;i<5;i++){
        if(student[i].marks == highest_marks ){
            printf("\n Student Name is :- %s",student[i].name);
            printf("\n Student Roll_no is :- %d",student[i].roll_no);
            printf("\n Student Marks :- %.2f",student[i].marks);
            break; 
        }
    }

    float avg;
    float sum =0;
    for(int i=0;i<5;i++){
        sum+=student[i].marks;
    }
    avg = sum / (sizeof(student) / sizeof(student[0]));
    printf("AVG :- %f",avg);

    return 0;
}