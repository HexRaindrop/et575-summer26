/*
Mike mevaklo 
june 17 2026
lab 18
*/

#include<iostream>
#include "lab18_functions_mevkalo.cpp"

using namespace std;

int main(){
    cout << "---- example one ----" << endl;
    checknumber();

    cout << "---- example two ----" << endl;
    float n = validatnumber();
    cout << n << endl;

    cout << "---- example three ----" << endl;
    iofiles();

    cout << "---- example four ----" << endl;
    writefile();

    cout << "---- example five ----" << endl;

    string filename = "outputfile.txt";
    appendfile(filename);
    return 0;
}