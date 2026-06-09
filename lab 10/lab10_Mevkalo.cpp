/*
Mike Mevkalo
lab 10, loops
june 9 2026
*/

#include<iostream>

using namespace std;

int main(){
    cout << "---- example 1 ----";
    for (int x = 1; x<=5 ; x++){
        cout << "hello" << x << endl;
    }

    cout << "---- example 2 ----" << endl;
    for (int x = 1; x<= 9; x += 2){
        cout << "the value of X is " << x << endl;
    }

    cout << "---- example 3 ----" << endl;
    for (int x = 10; x >= -10; x--){
        cout << "the value of X is " << x << endl;
    }

    cout << "---- example 4 ----" << endl;
    int counter = 0;
    int sum_positive = 0;
    for (int x = -20;  x <= 20 ; x+=4){
        cout << "the value of x is " << x << endl;
        if (x % 5 == 0 && x!= 0 ) counter++;
        if (x > 0) sum_positive += x;
    }

    cout << endl << "the numbes that are multpiled of 5 =" << counter << endl;
    cout << "the sum of all positive numbers is " << sum_positive << endl;

    cout << "---- example 5 ----" << endl;
    int n = 1;
    while (n<=5){
        cout << "N is " << n << endl;
        n++;
    }
    cout << endl;
    n =1;
    while (n++ <=5){
        cout << "n is " << n << endl;
    }
    cout << endl;
    n =1;
    while (++n <=5){
        cout << "n is " << n << endl;
    }

    cout << "---- example 6 ----" << endl;
    int number = 0;
    cout << "enter a number: " << endl;
    cin >> number;

    while (!(number>=1 && number <= 9)){
        cout << "enter a new number between 1 and 9: ";
        cin >> number;
    }

    cout << "collected number = " << number << endl;

    cout << "---- Exercise 1: ----" << endl;

    counter = 0;
    for (int n = 21; n >= -21 ; n -= 5){
        if (n % 2 == 0) counter++;
        cout << "the number is " << n << endl;
    }
    cout << "the number of multiples of 2 is " << number << endl;

    cout << "---- Exercise 2: ----" << endl;

    int user_int = 0;

    cout << "please enter a number: ";
    cin >> user_int;

    while (!(user_int < 30)){
        cout << "please enter a number less then 30: ";
        cin >> user_int;
    }

    for (user_int; user_int <=30; user_int += 4) cout << "your new number is " << user_int << endl;

    return 0;
}