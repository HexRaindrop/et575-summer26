/*
Mike Mevkalo
June 16, 2026
Lab 16
*/

#include <iostream>
#include "lab16_mevkalo_functions.cpp"

using namespace std;

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