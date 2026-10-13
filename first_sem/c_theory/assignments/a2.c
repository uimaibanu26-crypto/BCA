#include <stdio.h>

int main()
{
    int roll, m1, m2, m3, m4, m5;
    int total;
    float average, percentage;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter subject 1 mark: ");
    scanf("%d", &m1);
    printf("Enter subject 2 mark: ");
    scanf("%d", &m2);
    printf("Enter subject 3 mark: ");
    scanf("%d", &m3);
    printf("Enter subject 4 mark: ");
    scanf("%d", &m4);
    printf("Enter subject 5 mark: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage =( total / 500.0 )* 100;

    printf("\n--- Student Result ---\n");
    printf("Roll Number = %d\n", roll);
    printf("Total Marks = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}