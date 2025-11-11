#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMPSIZE 100

struct Employee
{
    int id;
    int salary;
    int age;
    char name[50];
    char dept[50];
    int active;
};

struct Employee empList[EMPSIZE];
int empCount = 0;

// Function declarations
void printEmployee(struct Employee e);
int findIndexById(int id);
void addEmployee();
void dispEmployee();
void deleteEmployee();
void updateEmployee();
void searchEmployeeId();

// Find employee index by ID
int findIndexById(int id)
{
    int i;
    for (i = 0; i < empCount; i++)
    {
        if (empList[i].active == 1 && empList[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

// Add new employee
void addEmployee()
{
    struct Employee e;

    printf("\nEnter Employee ID : ");
    scanf("%d", &e.id);

    if (findIndexById(e.id) != -1)
    {
        printf("\nEmployee ID %d already exists in employee list.\n", e.id);
        return;
    }

    e.active = 1;

    printf("\nEnter Employee Name : ");
    scanf("%s", e.name);

    printf("\nEnter Employee Age : ");
    scanf("%d", &e.age);

    printf("\nEnter Employee Salary : ");
    scanf("%d", &e.salary);

    printf("\nEnter Employee Department : ");
    scanf("%s", e.dept);

    empList[empCount] = e;
    empCount++;

    printf("\nEmployee added successfully!\n");
}

// Print one employee’s details
void printEmployee(struct Employee e)
{
    printf("\n%-5d %-10s %-5d %-10d %-10s", e.id, e.name, e.age, e.salary, e.dept);
}

// Delete employee by setting active = 0
void deleteEmployee()
{
    int id, index;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    index = findIndexById(id);

    if (index == -1)
    {
        printf("\nEmployee ID %d not found.\n", id);
        return;
    }

    empList[index].active = 0;
    printf("\nEmployee ID %d deleted successfully.\n", id);
}

// Display all active employees
void dispEmployee()
{
    int i, found = 0;

    if (empCount == 0)
    {
        printf("\nEmployee list is empty.\n");
        return;
    }

    printf("\nID    Name       Age   Salary     Dept");
    printf("\n------------------------------------------");

    for (i = 0; i < empCount; i++)
    {
        if (empList[i].active == 1)
        {
            printEmployee(empList[i]);
            found = 1;
        }
    }

    if (!found)
        printf("\nNo active employees found.\n");
    printf("\n");
}

// Update employee record
void updateEmployee()
{
    int id, index;

    printf("\nEnter Employee ID to update : ");
    scanf("%d", &id);

    index = findIndexById(id);

    if (index == -1)
    {
        printf("\nEmployee ID %d not found.\n", id);
        return;
    }

    printf("Enter new Name : ");
    scanf("%s", empList[index].name);

    printf("Enter new Age : ");
    scanf("%d", &empList[index].age);

    printf("Enter new Salary : ");
    scanf("%d", &empList[index].salary);

    printf("Enter new Department : ");
    scanf("%s", empList[index].dept);

    printf("\nEmployee record updated successfully.\n");
}

void searchEmployeeId()
{
    int id, index;
    printf("\nEnter Employee id to search : ");
    scanf("%d", &id);

    index = findIndexById(id);

    if (index == -1)
    {
        printf("\nEmployee id : %d is not present in list..", id);
        return;
    }
    printEmployee(empList[index]);
}

int login()
{
    char userName[40], password[50];
    int attempt = 0;

    printf("\nEnter Login Details ::: ");
    printf("\n==============================");

    while (attempt < 3)
    {
        printf("\nEnter User Name : ");
        gets(userName);
        printf("\nEnter Password : ");
        gets(password);

        if ((strcmp(userName, "harshil") == 0) && (strcmp(password, "123") == 0))
        {
            return 1;
        }
        else
        {
            attempt++;
            printf("\n%d is remaining attempt..", 3 - attempt);
        }
    }
    if (attempt == 3)
    {
        printf("\n\n%d time wrong credencials given,\n\tLogin Failed..", attempt);
        return 0;
    }
}

int main()
{
    int choice = 0;
    if (login())
    {

        do
        {
            printf("\n1) Add Employee");
            printf("\n2) Update Employee");
            printf("\n3) Delete Employee");
            printf("\n4) Search Employee by ID");
            printf("\n5) Display Employees");
            printf("\n6) Exit");
            printf("\nEnter your choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                addEmployee();
                break;
            case 2:
                updateEmployee();
                break;
            case 3:
                deleteEmployee();
                break;
            case 4:
                searchEmployeeId();
                break;
            case 5:
                dispEmployee();
                break;
            case 6:
                printf("\nExiting the application...");
                exit(0);
            default:
                printf("\nInvalid choice. Please try again.");
            }
        } while (choice != 6);

        return 0;
    }
}
