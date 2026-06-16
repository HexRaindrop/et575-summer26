/*
Mike Mevkalo
June 16, 2026
Lab 16
*/

#include <iostream>
// #include "lab16_mevkalo_functions.cpp"
// im not sure why but the include didnt work so im moving everying to one file
using namespace std;

void intropinter(){
int num = 12;
char sym = '#';
string n = "Peter";

int* ptrint;
char* ptrchar;
string* ptrstring;


cout<< ptrint<< endl;
cout << ptrchar << endl;
cout << ptrstring << endl;
}

// example 2 
void a(string v){
    cout << "A = " << v << endl;
    v = "updated A";
}

void b(string& v){
    cout << "B = " << v << endl;
    v = "updated B";
}

void c(string* v){
    cout << "c = " << v << endl;
}



int main(){
    // excercise A
    int* ptr; // we make a pointer called ptr
    int var = 7; // we make a variable called var
    int foo = 21; // we make a variable called foo
    ptr = &var; // we assign the pointer ptr the location of var
    ptr = &foo; // we then reassign the pointer to the location of foo
    int& ref=var; // we make a refrerence which is a pointer that can point to only one location in memmory
    // if if understand, a refrence is a const varible holding the location
    // while a pointer is dynamic variable holding the location
    
    // example one
    cout << "----- example one ----" << endl;
    intropinter();

    cout << "----- example two ----" << endl;

    string something = "hello world!";

    a(something);
    b(something);
    c(&something);
    a(something);
    return 0;
}