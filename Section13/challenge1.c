#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char name[50];
    int hireDate;
    float salary;
};

int main(){

    struct Employee employee = {"Luca Longhi", 10052021, 50000.0};
    struct Employee newEmployee;

    printf("Actual employee\n");
    printf("Name: %s\tHire date: %d\tSalary: %.2f\n", employee.name, employee.hireDate, employee.salary);

    printf("Insert the name of the new employee: ");
    fgets(newEmployee.name, 50, stdin);
    newEmployee.name[strcspn(newEmployee.name, "\n")] = '\0';

    printf("Insert the hire date of the new employee: ");
    scanf("%d", &newEmployee.hireDate);
    printf("Insert the salary of the new employee: ");
    scanf("%f", &newEmployee.salary);

    printf("New employee\n");
    printf("Name: %s\tHire date: %d\tSalary: %.2f\n", newEmployee.name, newEmployee.hireDate, newEmployee.salary);

    return 0;

}