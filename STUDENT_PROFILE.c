#include <stdio.h>

int main()
{
    char name[50], college[50], department[50];
    int age, semester;
    float cgpa;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter College: ");
    scanf("%s", college);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Semester: ");
    scanf("%d", &semester);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\nStudent Profile\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("College    : %s\n", college);
    printf("Department : %s\n", department);
    printf("Semester   : %d\n", semester);
    printf("CGPA       : %.2f\n", cgpa);

    return 0;
}
