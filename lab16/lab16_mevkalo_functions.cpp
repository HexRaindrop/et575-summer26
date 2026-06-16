/*
Mike Mevkalo
June 16, 2026
Lab 16
*/

#include <iostream>

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


// 