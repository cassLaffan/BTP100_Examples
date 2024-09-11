/*
* In this week's walkthrough, we are going to write
* a basic program that reads a user's age and calculates
* the following things:
* 1) How many months this person has been alive
* 2) What year they were born
* 3) How many years until they can retire!
*/

// Name: Cassandra
// Student Number: 500965668

#include <stdio.h>

int main(){
    int age, ageInMonths, birthYear, retirement;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Calculations
    ageInMonths = age * 12;
    birthYear = 2024 - age;
    retirement = 65 - age; // assume 65 is the retirement year
 
    printf("Your age, %d, in months is: %d\n", age, ageInMonths);
    printf("Your birth year is (likely): %d\n", birthYear);
    printf("You can probably retire in %d years!\n", retirement);

    return 0;
}