#include<stdio.h>

typedef struct students{
    char name[100];
    int roll_no;
    float marks;
}S;

int main(){
    S students[5];
    for(int i=0;i<5;i++){
        printf("Enter %d Student name :- ",i+1);
        scanf("%S",&students[i].name);
        printf("Enter  Student roll_no :- ");
        scanf("%d",&students[i].roll_no);
        printf("Enter  Student marks :- ");
        scanf("%f",&students[i].marks);
    }
    for(int i=0 ;i<5;i++){
        printf("\n------------------\n");
        printf("Student [%d] name is :- %s \n",i+1,students[i].name);
        printf("Student name is :- %d \n",students[i].roll_no);
        printf("Student name is :- %.2f \n",students[i].marks);
        printf("\n------------------\n");
    }

    return 0;

}