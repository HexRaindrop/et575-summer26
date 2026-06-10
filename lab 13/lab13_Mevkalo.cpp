/*
Mike Mevkalo
june 10, 2026
lab 13, functions
*/

#include<iostream>
#include "lab13_functions_mevkalo.cpp"

using namespace std;

int main(){

    cout << "---- example 1 ----" << endl;
    printhi();

    cout << "---- example 2 ----" << endl;
    greeting("peter");
    string user = "annie";
    greeting(user);

    cout << "---- example 3 ----" << endl;

    dbnumber(1);
    return 0;
}

