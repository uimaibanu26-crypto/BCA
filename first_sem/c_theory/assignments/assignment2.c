#include <stdio.h>
 
/* Reads roll number, name and marks of 5 students */
void readStudents(int roll[], char name[][30], int marks[][5])
{
    int i, j;
 
    for (i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
 
        printf("Roll number: ");
        scanf("%d", &roll[i]);
 
        printf("Name: ");
        scanf(" %29[^\n]", name[i]);            /* allows spaces in name */
 
        for (j = 0; j < 5; j++) {
            printf("Marks in subject %d (0-100): ", j + 1);
            scanf("%d", &marks[i][j]);
 
            while (marks[i][j] < 0 || marks[i][j] > 100) {
                printf("Invalid marks. Enter a value from 0 to 100: ");
                scanf("%d", &marks[i][j]);
            }
        }
    }
}
 
/* Returns the total of the 5 subject marks of one student */
int calculateTotal(int m[])
{
    int j, sum = 0;
 
    for (j = 0; j < 5; j++)
        sum = sum + m[j];
 
    return sum;
}
 
/* Returns the average for a given total */
float calculateAverage(int total)
{
    return total / 5.0;
}
 
/* Returns the percentage for a given total (out of 500) */
float calculatePercentage(int total)
{
    return (total / 500.0) * 100;
}
 
/* Returns 1 (PASS) if every subject is at least 35, otherwise 0 (FAIL) */
int checkResult(int m[])
{
    int j;
 
    for (j = 0; j < 5; j++) {
        if (m[j] < 35)
            return 0;
    }
    return 1;
}
 
/* Prints the result table for all students */
void displayTable(int roll[], char name[][30], int marks[][5],
                  int total[], float average[], float percentage[],
                  int passed[])
{
    int i, j;
 
    printf("\n\n%-8s %-20s %5s %5s %5s %5s %5s %7s %8s %8s %-6s\n",
           "Roll No", "Name", "Sub1", "Sub2", "Sub3", "Sub4", "Sub5",
           "Total", "Average", "Percent", "Result");
    for (j = 0; j < 100; j++)
        printf("-");
    printf("\n");
 
    for (i = 0; i < 5; i++) {
        printf("%-8d %-20s", roll[i], name[i]);
        for (j = 0; j < 5; j++)
            printf(" %5d", marks[i][j]);
        printf(" %7d %8.2f %7.2f%% %-6s\n",
               total[i], average[i], percentage[i],
               passed[i] ? "PASS" : "FAIL");
    }
 
    for (j = 0; j < 100; j++)
        printf("-");
    printf("\n");
}
 
int main(void)
{
    int roll[5];
    char name[5][30];
    int marks[5][5];
    int total[5];
    float average[5];
    float percentage[5];
    int passed[5];
    int i;
 
    readStudents(roll, name, marks);
 
    for (i = 0; i < 5; i++) {
        total[i] = calculateTotal(marks[i]);
        average[i] = calculateAverage(total[i]);
        percentage[i] = calculatePercentage(total[i]);
        passed[i] = checkResult(marks[i]);
    }
 
    displayTable(roll, name, marks, total, average, percentage, passed);
 
    return 0;
}
 