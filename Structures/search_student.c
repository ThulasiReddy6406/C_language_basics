#include <stdio.h>

typedef struct student {
    char name[100];
    int roll_no;
    float marks;
} S;

int main() {

    S student[5];

    // Input
    for(int i = 0; i < 5; i++) {

        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", student[i].name);

        printf("Roll No: ");
        scanf("%d", &student[i].roll_no);

        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }

    // Search
    int search;

    printf("\nEnter roll number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 5; i++) {

        if(student[i].roll_no == search) {

            printf("\nStudent Found!\n");
            printf("Name: %s\n", student[i].name);
            printf("Roll No: %d\n", student[i].roll_no);
            printf("Marks: %.2f\n", student[i].marks);

            break;
        }else{
            printf("\nStudent not found\n");
        }
    }

   

    return 0;
}