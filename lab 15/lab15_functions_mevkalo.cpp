/*
Mike Mevkalo
june 11, 2026
lab 15
*/

#include<iostream>

using namespace std;

void cheers(int n){
    int n2 = n;
    if (n == 1) cout << "STOP" << endl;
    else cout << (n2*2) << "\t";
    //cheers(n-1);
}
int summation(int n){
    if (n != 0) return (summation(n-1)+n);
    else return 0;
}
int getpositive(){
    int num;

    cout << "enter a number"; cin >> num;
    if (num > 0) return num;
    else return getpositive();
}
#include<cmath>

float hypotneuse(int side1, int side2){
    return sqrt(pow(side1,2) + pow(side2,2));
}

void prirntresults(int side1,int side2, float hyp){
    cout << "the hypotnuies of a right triangel with sides " << side1 << "and" << side2 << "is " << hyp << endl;
}
#include<cstdlib>

void randomnumber(){
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
}
int random_num5_10(){
    srand(time(0));
    return (-5 + rand()%16);
}