#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float basicPay, hra, da, gross;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Basic Pay: ");
    scanf("%f", &basicPay);

    hra = basicPay * 0.20;
    da = basicPay * 0.15;
    gross = basicPay + hra + da;

    printf("\nEmployee Salary Details\n");
    printf("Employee Name : %s\n", name);
    printf("Employee ID   : %d\n", empId);
    printf("Basic Pay     : %.2f\n", basicPay);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}
