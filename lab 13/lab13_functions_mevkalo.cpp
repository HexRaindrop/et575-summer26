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