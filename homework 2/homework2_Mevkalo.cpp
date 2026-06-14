/* 

Mike Mevkalo

Homework 2: Loops mechanism

*/

#include<iostream>

using namespace std;

int main(){

// quastion 1

int user_input_number = 0;

do{
  cout << "Enter a number greater than or equal to 10: " ; cin >> user_input_number;  
  if (user_input_number < 10) {
    cout << "error, the number entered is not valid" << endl;
    continue;
  }
  cout << user_input_number << " is a valid number!" << endl;
}
while(user_input_number < 10);

// quastion 2

int number1;
int number2;

cout << "please enter the first number: "; cin >> number1;
cout << "please enter the second number: "; cin >> number2;

if (number1 > number2) {
    while(number2 < number1){
        cout << number2 << " ";
        number2++;
    }
    cout << number2 << " ";
}
else {
    while (number1 < number2){
    cout << number1 << " ";
    number1++;
    }
    cout << number1 << " ";
}

cout << endl;

//quastion 3

int dimension = 10;

for (int col = 1; col <= dimension -1; ++col){
    for (int row = 1; row  <= dimension -1; ++row){
        if (
             row == 3 && col >= 4 && col <= 5 ||
             row == 4 && col >= 3 && col <= 6 ||
             row == 5 && col >= 5 && col <= 7 ||
             row == 6 && col >= 3 && col <= 6 ||
             row == 7 && col >= 4 && col <= 5
            ) cout << " % ";
        else cout << " . ";
    }
    cout << endl;
}

return 0;
}