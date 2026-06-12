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
    int x = dbnumber(6);
    cout << x << endl;
    
    cout << "---- example 4 ----" << endl;
    float a = arearectangle(2.5,2);
    cout << a << endl;
    
    cout << "---- example 5 ----" << endl;
    string r = checknumber(-2);
    cout << r << endl;
    
    cout << "---- example 6 ----" << endl;
    int side = positevnumber();
    int asquare = areasquare(side);
    printresult(asquare);

    cout << "---- example 7 ----" << endl;
    cout << tripleaddtion() << endl;
    return 0;
}

