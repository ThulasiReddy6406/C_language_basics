#include <stdio.h>
#include <string.h>

#define MAX 100

// ================= STUDENT STRUCTURE =================

typedef struct {
    char name[100];
    int roll_no;
    char branch[50];
    char division[20];
    float cgpa;
    float attendance;
} Student;


// ================= TEACHER STRUCTURE =================

typedef struct {
    char name[100];
    int id;
    char department[50];
    float salary;
} Teacher;


// ================= STAFF STRUCTURE =================

typedef struct {
    char name[100];
    int id;
    char department[50];
    float salary;
} Staff;


// ================= STUDENT FUNCTIONS =================

void add_student(Student students[], int *count)
{
    printf("\nEnter student name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll_no);

    printf("Enter branch: ");
    scanf(" %[^\n]", students[*count].branch);

    printf("Enter division: ");
    scanf(" %[^\n]", students[*count].division);

    printf("Enter CGPA: ");
    scanf("%f", &students[*count].cgpa);

    printf("Enter attendance: ");
    scanf("%f", &students[*count].attendance);

    (*count)++;

    printf("\nStudent added successfully!\n");
}


void display_students(Student students[], int count)
{
    if(count == 0)
    {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n========== STUDENT DETAILS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name       : %s\n", students[i].name);
        printf("Roll No    : %d\n", students[i].roll_no);
        printf("Branch     : %s\n", students[i].branch);
        printf("Division   : %s\n", students[i].division);
        printf("CGPA       : %.2f\n", students[i].cgpa);
        printf("Attendance : %.2f%%\n", students[i].attendance);
    }
}


void search_student(Student students[], int count)
{
    int roll;
    int found = 0;

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll_no == roll)
        {
            printf("\nStudent found!\n");

            printf("Name       : %s\n", students[i].name);
            printf("Roll No    : %d\n", students[i].roll_no);
            printf("Branch     : %s\n", students[i].branch);
            printf("Division   : %s\n", students[i].division);
            printf("CGPA       : %.2f\n", students[i].cgpa);
            printf("Attendance : %.2f%%\n", students[i].attendance);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent not found.\n");
    }
}


// ================= TEACHER FUNCTIONS =================

void add_teacher(Teacher teachers[], int *count)
{
    printf("\nEnter teacher name: ");
    scanf(" %[^\n]", teachers[*count].name);

    printf("Enter teacher ID: ");
    scanf("%d", &teachers[*count].id);

    printf("Enter department: ");
    scanf(" %[^\n]", teachers[*count].department);

    printf("Enter salary: ");
    scanf("%f", &teachers[*count].salary);

    (*count)++;

    printf("\nTeacher added successfully!\n");
}


void display_teachers(Teacher teachers[], int count)
{
    if(count == 0)
    {
        printf("\nNo teacher records found.\n");
        return;
    }

    printf("\n========== TEACHER DETAILS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nTeacher %d\n", i + 1);

        printf("Name       : %s\n", teachers[i].name);
        printf("ID         : %d\n", teachers[i].id);
        printf("Department : %s\n", teachers[i].department);
        printf("Salary     : %.2f\n", teachers[i].salary);
    }
}


void search_teacher(Teacher teachers[], int count)
{
    int id;
    int found = 0;

    printf("\nEnter teacher ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(teachers[i].id == id)
        {
            printf("\nTeacher found!\n");

            printf("Name       : %s\n", teachers[i].name);
            printf("ID         : %d\n", teachers[i].id);
            printf("Department : %s\n", teachers[i].department);
            printf("Salary     : %.2f\n", teachers[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nTeacher not found.\n");
    }
}


// ================= STAFF FUNCTIONS =================

void add_staff(Staff staff[], int *count)
{
    printf("\nEnter staff name: ");
    scanf(" %[^\n]", staff[*count].name);

    printf("Enter staff ID: ");
    scanf("%d", &staff[*count].id);

    printf("Enter department: ");
    scanf(" %[^\n]", staff[*count].department);

    printf("Enter salary: ");
    scanf("%f", &staff[*count].salary);

    (*count)++;

    printf("\nStaff added successfully!\n");
}


void display_staff(Staff staff[], int count)
{
    if(count == 0)
    {
        printf("\nNo staff records found.\n");
        return;
    }

    printf("\n========== STAFF DETAILS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nStaff %d\n", i + 1);

        printf("Name       : %s\n", staff[i].name);
        printf("ID         : %d\n", staff[i].id);
        printf("Department : %s\n", staff[i].department);
        printf("Salary     : %.2f\n", staff[i].salary);
    }
}


void search_staff(Staff staff[], int count)
{
    int id;
    int found = 0;

    printf("\nEnter staff ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(staff[i].id == id)
        {
            printf("\nStaff found!\n");

            printf("Name       : %s\n", staff[i].name);
            printf("ID         : %d\n", staff[i].id);
            printf("Department : %s\n", staff[i].department);
            printf("Salary     : %.2f\n", staff[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStaff not found.\n");
    }
}


// ================= MAIN FUNCTION =================

int main()
{
    Student students[MAX];
    Teacher teachers[MAX];
    Staff staff[MAX];

    int student_count = 0;
    int teacher_count = 0;
    int staff_count = 0;

    int choice;

    do
    {
        printf("\n\n====================================");
        printf("\n       COLLEGE INFORMATION SYSTEM");
        printf("\n====================================");

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");

        printf("\n\n4. Add Teacher");
        printf("\n5. Display Teachers");
        printf("\n6. Search Teacher");

        printf("\n\n7. Add Staff");
        printf("\n8. Display Staff");
        printf("\n9. Search Staff");

        printf("\n\n0. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add_student(students, &student_count);
                break;

            case 2:
                display_students(students, student_count);
                break;

            case 3:
                search_student(students, student_count);
                break;

            case 4:
                add_teacher(teachers, &teacher_count);
                break;

            case 5:
                display_teachers(teachers, teacher_count);
                break;

            case 6:
                search_teacher(teachers, teacher_count);
                break;

            case 7:
                add_staff(staff, &staff_count);
                break;

            case 8:
                display_staff(staff, staff_count);
                break;

            case 9:
                search_staff(staff, staff_count);
                break;

            case 0:
                printf("\nThank you!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}