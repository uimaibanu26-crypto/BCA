#include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    double p, q;
    char c, d;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter two float values: ");
    scanf("%f %f", &x, &y);

    printf("Enter two double values: ");
    scanf("%lf %lf", &p, &q);

    printf("Enter two characters: ");
    scanf(" %c %c", &c, &d);

    printf("\n--- Integer Operations ---\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    printf("\n--- Float Operations ---\n");
    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n", x / y);

    printf("\n--- Double Operations ---\n");
    printf("Addition = %.2lf\n", p + q);
    printf("Subtraction = %.2lf\n", p - q);
    printf("Multiplication = %.2lf\n", p * q);
    printf("Division = %.2lf\n", p / q);

    printf("\n--- Character Operations ---\n");
    printf("Addition = %d\n", c + d);
    printf("Subtraction = %d\n", c - d);
    printf("Multiplication = %d\n", c * d);
    printf("Division = %d\n", c / d);

    return 0;
} 