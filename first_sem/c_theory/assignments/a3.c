#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("----- Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Addition = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Subtraction = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Multiplication = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if(b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Cannot divide by zero");

            break;

        case 5:
        
            int x, y;

            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);

            if(y != 0)
                printf("Modulus = %d", x % y);
            else
                printf("Cannot find modulus with zero");

            break;
        

        default:
            printf("Invalid choice");
    }

    return 0;
}