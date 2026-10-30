#include <stdio.h>
#include <string.h>

// One employee record
struct Employee {
    int emp_id;
    char name[40];
    char role[30];          // like Developer, Tester, Manager
    float salary;
    int project_id;         // which project they are working on
};

// One project
struct Project {
    int project_id;
    char project_name[50];
    char status[20];        // Ongoing, Completed, On Hold
    int team_size;
};

// One department
struct Department {
    int dept_id;
    char dept_name[40];     // like Development, HR, Sales
    int no_of_employees;
};

int main() {
    // Main data we need to manage
    struct Employee employees[100];
    struct Project projects[20];
    struct Department departments[10];

    int num_emp, num_proj, num_dept;
    int i;

    // --------- Taking Employee details ---------
    printf("How many employees? ");
    scanf("%d", &num_emp);

    for(i = 0; i < num_emp; i++) {
        printf("\nEmployee %d details:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);

        printf("Role: ");
        scanf(" %[^\n]", employees[i].role);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Project ID they are working on: ");
        scanf("%d", &employees[i].project_id);
    }

    // --------- Taking Project details ---------
    printf("\nHow many projects? ");
    scanf("%d", &num_proj);

    for(i = 0; i < num_proj; i++) {
        printf("\nProject %d details:\n", i+1);
        printf("Project ID: ");
        scanf("%d", &projects[i].project_id);

        printf("Project Name: ");
        scanf(" %[^\n]", projects[i].project_name);

        printf("Status (Ongoing/Completed/On Hold): ");
        scanf(" %[^\n]", projects[i].status);

        printf("Team size: ");
        scanf("%d", &projects[i].team_size);
    }

    // --------- Taking Department details ---------
    printf("\nHow many departments? ");
    scanf("%d", &num_dept);

    for(i = 0; i < num_dept; i++) {
        printf("\nDepartment %d details:\n", i+1);
        printf("Department ID: ");
        scanf("%d", &departments[i].dept_id);

        printf("Department Name: ");
        scanf(" %[^\n]", departments[i].dept_name);

        printf("Number of employees in this dept: ");
        scanf("%d", &departments[i].no_of_employees);
    }

    // --------- Displaying everything clearly ---------
    printf("\n\n========== EMPLOYEE DETAILS ==========\n");
    for(i = 0; i < num_emp; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Employee ID   : %d\n", employees[i].emp_id);
        printf("Name          : %s\n", employees[i].name);
        printf("Role          : %s\n", employees[i].role);
        printf("Salary        : %.2f\n", employees[i].salary);
        printf("Project ID    : %d\n", employees[i].project_id);
    }

    printf("\n\n========== PROJECT DETAILS ==========\n");
    for(i = 0; i < num_proj; i++) {
        printf("\nProject %d:\n", i+1);
        printf("Project ID    : %d\n", projects[i].project_id);
        printf("Project Name  : %s\n", projects[i].project_name);
        printf("Status        : %s\n", projects[i].status);
        printf("Team Size     : %d\n", projects[i].team_size);
    }

    printf("\n\n========== DEPARTMENT DETAILS ==========\n");
    for(i = 0; i < num_dept; i++) {
        printf("\nDepartment %d:\n", i+1);
        printf("Department ID     : %d\n", departments[i].dept_id);
        printf("Department Name   : %s\n", departments[i].dept_name);
        printf("No. of Employees  : %d\n", departments[i].no_of_employees);
    }

    return 0;
}