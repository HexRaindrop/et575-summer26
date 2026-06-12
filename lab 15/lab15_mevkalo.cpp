/*
Mike Mevkalo
june 11, 2026
lab 15
*/

#include<iostream>
#include"lab15_functions_mevkalo.cpp"
using namespace std;

int main(){
    cout << "---- example 1 ----" << endl;
    cheers(5);
    cout << endl;
    cout << "---- example 2 ----" << endl;
    int s = summation(5);
    cout << s << endl;
    cout << "---- example 3 ----" << endl;
    int n = getpositive();
    cout << "collected number = " << n << endl;
    cout << "---- example 4 ----" << endl;
    int s1 = getpositive();
    int s2 = getpositive();
    float h = hypotneuse(s1,s2);
    prirntresults(s1,s2,h);
    cout << "---- example 5 ----" << endl;
    randomnumber();
    cout << endl;
    randomnumber();

    cout << "---- example 6 ----" << endl;
    int r = random_num5_10();
    cout << r << endl;

    cout << "---- Exercise A ----" << endl;
    print_distance_results();




    return 0;
}