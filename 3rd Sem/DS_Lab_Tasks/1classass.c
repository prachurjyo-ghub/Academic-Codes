#include <stdio.h>

int main() {
    int marks;
    char grade[3]; 

   
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    
    if (marks >= 80 && marks <= 100) {
        sprintf(grade, "A+");
    } else if (marks >= 75 && marks <= 79) {
        sprintf(grade, "A");
    } else if (marks >= 70 && marks <= 74) {
        sprintf(grade, "A-");
    } else if (marks >= 65 && marks <= 69) {
        sprintf(grade, "B+");
    } else if (marks >= 60 && marks <= 64) {
        sprintf(grade, "B");
    } else if (marks >= 55 && marks <= 59) {
        sprintf(grade, "B-");
    } else if (marks >= 50 && marks <= 54) {
        sprintf(grade, "C+");
    } else if (marks >= 45 && marks <= 49) {
        sprintf(grade, "C");
    } else if (marks >= 40 && marks <= 44) {
        sprintf(grade, "D");
    } else if (marks >= 0 && marks <= 39) {
        sprintf(grade, "F");
    } else {
        
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        return 1; 
    }

    
    printf("The student's grade is: %s\n", grade);

    return 0; 
}
