#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Mark 1: ");
    scanf("%f", &m1);

    printf("Enter Mark 2: ");
    scanf("%f", &m2);

    printf("Enter Mark 3: ");
    scanf("%f", &m3);

    printf("Enter Mark 4: ");
    scanf("%f", &m4);

    printf("Enter Mark 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", roll);
    printf("Name : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    return 0;
}
