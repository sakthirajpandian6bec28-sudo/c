#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    float km, meter;
    float hours, minutes;
    int days, totalHours;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);

    printf("\nEnter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius = %.2f\n", celsius);

    printf("\nEnter Distance in Kilometers: ");
    scanf("%f", &km);
    meter = km * 1000;
    printf("Meters = %.2f\n", meter);

    printf("\nEnter Time in Hours: ");
    scanf("%f", &hours);
    minutes = hours * 60;
    printf("Minutes = %.2f\n", minutes);

    printf("\nEnter Number of Days: ");
    scanf("%d", &days);
    totalHours = days * 24;
    printf("Hours = %d\n", totalHours);

    return 0;
}
