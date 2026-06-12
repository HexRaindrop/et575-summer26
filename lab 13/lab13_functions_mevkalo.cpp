/*
Mike Mevkalo
june 10, 2026
lab 13, functions
*/

#include<iostream>

using namespace std;

void printhi(){
    cout << "hello world!" << endl;
    return;
}

void greeting (string username){
    cout << "hello " << username << endl;
}

int dbnumber(int n){
    return n*2;
}
float arearectangle(float width, float lenght) {
    return width * lenght;
}

string checknumber(int number){
    if (number > 0) return "positve";
    else if (number < 0) return "negative";
    else return "zero";
    }
int areasquare(int side){
    return side * side;
    }
int positevnumber(){
    int n;
    cout << "enter a number: "; cin >> n;
    if (n>=0) return n;
    while(!(n>=0)){
        cout << "error, try again: "; cin >> n;
        if (n>=0) return n;
        }
    }
int addtion(int a, int b){
    return a+b;
}
void printresult(int area){
    cout << "the area of a square is " << area << endl;
    return;
}
int tripleaddtion(){
    return 3*(addtion(2,3));
}

int collect_user_int(){
    int user_input;
    do {
        cout << "please enter a number [1 - 10] :"; cin >> user_input;
        if (!(user_input >= 1 && user_input <= 10)) cout << "please try again" << endl;
    }
    while(!(user_input >= 1 && user_input <= 10));
    return user_input;
    
}
int count(int user_input){
    int final_count = 0;
    int my_loop_index = 15;

    for (my_loop_index; my_loop_index > user_input ; my_loop_index--){
        if (my_loop_index % 3 == 0) continue;
        final_count++;
    }
    return final_count;
}

void print_all_int(int user_input){
    
    for (user_input; user_input > 0; user_input--){
        cout << "the intiger is " << user_input << endl;
    }
}
void prompt_the_result(int user_input, int counted_int){
    cout << "From " << user_input << " up to 15, there are " << counted_int << " number/s that are not multiplied by 3.";
}
