/*
Mike Mevkalo
june 11, 2026
lab 14

ai agent used was claude.ai
            step 1

The program inputs three subjects' marks, validates them, calculates total and percentage, assigns a grade, and displays the result.
Required functions: inputMarks(), totalMarks(), calculatePercentage(), determineGrade(), and displayResult(). Call order: inputMarks()
(×3) → calculatePercentage() (which calls totalMarks()) → determineGrade() →

            step 2

when asking the ai agent "Explain function calling function in C++ with an example" it gave the following code.

it says 

Function calling function means one function invokes another function inside its body, allowing code to be modular and reusable.

and the example was 

#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int sumOfSquares(int a, int b) {
    return square(a) + square(b);  // calling square() inside sumOfSquares()
}

int main() {
    cout << sumOfSquares(3, 4) << endl; // outputs 25
    return 0;
}
with this follow up

Here, sumOfSquares() calls square() twice to compute its result. This is exactly the pattern used in our grading program,
where calculatePercentage() calls totalMarks() to get the sum before computing the percentage — breaking a complex task 
into smaller, manageable functions.

            step 3

i made some pseudo code for the program

START

first functition, inputMarks():
        READ mark
        IF mark 0 OR mark 100 THEN
            PRINT "Invalid! Enter marks between 0-100"
    UNTIL mark is between 0 and 100
    RETURN mark

FUNCTION totalMarks(m1, m2, m3):
    RETURN m1 + m2 + m3

FUNCTION calculatePercentage(m1, m2, m3):
    total = totalMarks(m1, m2, m3)
    RETURN (total / 300) * 100

FUNCTION determineGrade(percentage):
    IF percentage >= 90 THEN RETURN 'A'
    ELSE IF percentage >= 80 THEN RETURN 'B'
    ELSE IF percentage >= 70 THEN RETURN 'C'
    ELSE IF percentage >= 60 THEN RETURN 'D'
    ELSE RETURN 'F'

FUNCTION displayResult(m1, m2, m3, grade):
    PRINT "With marks", m1, ",", m2, ",", m3, ", the GRADE is", grade

MAIN:
    m1 = inputMarks()
    m2 = inputMarks()
    m3 = inputMarks()

    percentage = calculatePercentage(m1, m2, m3)
    grade = determineGrade(percentage)

    PRINT "Total Marks:", totalMarks(m1, m2, m3)
    PRINT "Percentage:", percentage
    displayResult(m1, m2, m3, grade)

END
            step 4
the ai made the following code for the functions

int inputMarks() {
    int m;
    do {
        cin >> m;
        if (m < 0 || m > 100)
            cout << "Invalid! Enter marks between 0-100: ";
    } while (m < 0 || m > 100);
    return m;
}

int totalMarks(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

float calculatePercentage(int m1, int m2, int m3) {
    return (totalMarks(m1, m2, m3) / 300.0) * 100;
}

char determineGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

void displayResult(int m1, int m2, int m3, char grade) {
    cout << "With marks " << m1 << ", " << m2 << ", " << m3 
         << ", the GRADE is " << grade << endl;
}

            step 5  
to put together the code i simply added a main function also made by the ai which is below
*/

#include <iostream>
using namespace std;

int inputMarks() {
    int m;
    do {
        cin >> m;
        if (m < 0 || m > 100)
            cout << "Invalid! Enter marks between 0-100: ";
    } while (m < 0 || m > 100);
    return m;
}

int totalMarks(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

float calculatePercentage(int m1, int m2, int m3) {
    return (totalMarks(m1, m2, m3) / 300.0) * 100;
}

char determineGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

void displayResult(int m1, int m2, int m3, char grade) {
    cout << "With marks " << m1 << ", " << m2 << ", " << m3 
         << ", the GRADE is " << grade << endl;
}

int main() {
    int m1, m2, m3;

    cout << "Enter marks for subject 1 (0-100): ";
    m1 = inputMarks();
    cout << "Enter marks for subject 2 (0-100): ";
    m2 = inputMarks();
    cout << "Enter marks for subject 3 (0-100): ";
    m3 = inputMarks();

    float percentage = calculatePercentage(m1, m2, m3);
    char grade = determineGrade(percentage);

    cout << "Total Marks: " << totalMarks(m1, m2, m3) << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    displayResult(m1, m2, m3, grade);

    return 0;
}

/*
step 6
the compiled code worked as intended. here is a copy of the terminal used in testing. 
Enter marks for subject 1 (0-100): 80 
Enter marks for subject 2 (0-100): 99
Enter marks for subject 3 (0-100): 89
Total Marks: 268
Percentage: 89.3333%
With marks 80, 99, 89, the GRADE is B

step 7

there are no bugs. when doing the math myself i got the same results as expected.
*/