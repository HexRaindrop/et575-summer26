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

    cout << "----- example three ----" << endl;

    introarray();

    cout << "----- example four ----" << endl;

    const int s = 4;
    int age[s] = {0};
    printelements(s,age);

    updatearry(s,age);

    printelements(s,age);

    int c = countadult(s,age);
    cout << "adult 21+ = " << c << endl;


    cout << "----- ecersise B ----" << endl;
    const int size_arr = 10;
    int random_arr[size_arr];

    Fill_Array_Function(size_arr,random_arr);
    for (int i = 0; i < size_arr; i++) cout << random_arr[i] << "\t";
    cout << endl;
    int number_even_in_arr = Count_Even_Numbers_Function(size_arr,random_arr);
    cout << "the number of even numbers is " << number_even_in_arr << endl;
    return 0;
}