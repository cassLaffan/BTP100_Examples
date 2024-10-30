/*
* Today, we will be creating an Employee struct!
* This struct will have a name, an employee ID and a position.
* Then, we will prompt the user in a while loop to create employees,
* whom we will store in an array.
* We will also create a function that takes the user input.
*/

#include <stdio.h>

#define NAME_LEN 40
#define MAX_EMPS 2

// Defining our own Employee data type to use later
struct Employee{
    char name[NAME_LEN];
    char position[NAME_LEN];
    int empID;
};

// This function reads information from the user and then
// populates and returns a new Employee object
struct Employee getEmployee(){
    struct Employee emp;
    printf("Enter employee number: ");
    scanf("%d", &emp.empID);

    printf("\nEnter employee name: ");
    scanf("%s", emp.name);

    printf("\nEnter employee position: ");
    scanf("%s", emp.position);
    return emp;
}

// Increments and returns a number
int incrementEmployeeNum(int num, int addition){
    return num + addition;
}

int main(){
    // This is an array of Employee objects, just
    // like you would have with an array of ints or floats
    struct Employee emps[MAX_EMPS];

    for(int i = 0; i < MAX_EMPS; i++){
        // Call the getEmployee function and store
        // the returned Employee object in our emps array.
        emps[i] = getEmployee();
    }

    for(int i = 0; i < MAX_EMPS; i++){
        printf("Employee ID: %d\n", emps[i].empID);
        printf("Employee name: %s\n", emps[i].name);
        printf("Employee position: %s\n", emps[i].position);
    }

    // Overwriting the employee ID of the first employee
    // with a new value returned by the function defined
    // above.
    emps[0].empID = incrementEmployeeNum(emps[0].empID, 100);

    printf("Incrementing employee's employee number: %d\n", emps[0].empID);

    // We're using the type specifier for an address in memory
    // to find where our employee array sits in RAM
    printf("%p\n", emps);
    //printf("%s\n", emps);

    return 0;
}