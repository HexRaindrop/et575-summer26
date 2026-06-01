/*
Mike Mevkalo
June 1, 2026
Lab 4: numerical operators
*/

#include<iostream>

using namespace std;

int main(){
    cout << "\n---- example 1 ----" << endl;
    int n = 9, m = 2;
    // adding in incremntal operators
    cout << "n = " << n << endl;
    n++;
    cout << "n updated = " << n << endl; 
    //subtracting in incremntal operatiors
    cout << "m = " << m << endl;
    m--;
    cout << "m updated = " << m << endl; 
    // add a value onto a value with assigment operatiors
    n += m;
    cout << "n updated plus m = " << n << endl;

    // triple value of m
    m*= 3;
    cout<< "updated m triple = " << m << endl;

    // modulus find and return a remainder 
    cout << "modulus, remainder = " << n%m << endl;

    cout << "\n---- example 2 ----" << endl; 
    n = 2;
    m = 3;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
    cout << "are n and m equal?     " << (n==m) << endl;
    cout << "is n  NOT equal to m?  " << (n!=m) << endl;
    cout << "is m greater than or equal to n?   " << (m>= n) << endl;

    cout << "\n---- example 3 ----" << endl;
    // AND opperator, &&
    // OR opperatior, ||
    // NOT opperatior, !
    bool check1 = m < n;
    bool check2 = n <= m;
    bool check3 = m != n;

    cout << "check1 = " << check1 << endl;
    cout << "check2 = " << check2 << endl;
    cout << "check3 = " << check3 << endl;

    bool result1 = check1 && check2 && check3;  // false AND true AND true = false
    bool result2 = check1 || check2 || check3;  // false OR true OR true = true 
    bool result3 = ! check2;                    // true INVERT = false 

    cout << "result1 = " << result1 << endl;
    cout << "result2 = " << result2 << endl;
    cout << "result3 = " << result3 << endl;
    
    cout << "\n---- activity ----" << endl;
    char character;
    int number;

    cout << "what is the charecter?: ";
    cin >> character;

    cout << "what is the number?: ";
    cin>> number;

    number *=3;
    cout << "Triple the number " << number << endl;

    character %= 60;
    cout<< "Remainder of character " << character << endl;

    //Check if the number is less than or equal to character value using comparison operators.
    bool activeity_check1 = number <= character;
    cout << "is number less than or equal to character? " << activeity_check1 << endl;

    //Check if the number is less than or equal to -1 OR if the character value is not equal to 5 using 
    bool activeity_check2 = (number <= -1) || (character != 5);
    cout << "Result after comparison " << activeity_check2 << endl;

    //Check if the character value is a number between -2 and 2, inclusive 
    bool activeity_check3 = (character <= -2 || character >= 2);
    cout << "is number between -2 and 2? ";
    return 0;
}