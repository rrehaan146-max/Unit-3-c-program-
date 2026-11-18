/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float cutoff;
    char city[30];
    char dream[50];
};

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid student count!");
        return 0;
    }

    struct Student s[n];

    // Collect student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Cut-off Mark: ");
        scanf("%f", &s[i].cutoff);

        printf("Enter City: ");
        scanf(" %[^\n]", s[i].city);

        printf("Enter Dream: ");
        scanf(" %[^\n]", s[i].dream);
    }

    // Display student details
    printf("\n===== STUDENT DETAILS =====\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Cut-off Mark: %.2f\n", s[i].cutoff);
        printf("City: %s\n", s[i].city);
        printf("Dream: %s\n", s[i].dream);
    }

    return 0;
}
