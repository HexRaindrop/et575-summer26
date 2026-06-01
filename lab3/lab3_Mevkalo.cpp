/*
Mike Mevkalo
June 1, 2026
Lab 3: numerical variables
*/

#include<iostream>
using namespace std;
int main(){
    cout << "\n---- example 1 ----" << endl;
    int number = 5.9;
    cout << "the number is " << number << endl;
    //when working with int or intagers the compiler will only look at the whole number and not look at the floot point 
    double number1 = 3.123456789;
    float number2 = 9.12345567689;
    cout << "the double data type =" << number1 << endl;
    cout << "the float data type =" << number2 << endl;

    cout << "\n ---- example 2 ----" << endl;
    number =23.65;
    cout << "the updated number =" << number << endl;
    // constant variables can not be changed
    const float EXP = 2.718;
    cout << "the value of EXP =" << EXP << endl;

    cout << "\n ---- example 3 ----" << endl;
    const float gravity = 9.8;
    float time = 0, hight = 0;

    cout << "enter the falling time: ";
    cin >> time;

    hight = 0.5 * gravity * time * time;

    cout << "rge height of a falling object at " << time << " is " << hight << " meters." << endl;

    cout << "\n ---- example 4 ----" << endl;
    // the formula for circomfrence is 2*r*pi
    const float pi = 3.14159;
    float circimfrence = 0, radius = 0;

    cout << "enter a radius: ";
    cin >> radius;

    circimfrence = 2*radius*pi;

    cout << "the circumfrence is = " << circimfrence << endl;

    cout << "\n ---- activity ----" << endl;

    // pi is already declared in example 4
    // formula area = PI* radius*radius     Volume = (4/3.0)*PI*radius*radius*radius  .

    int r;
    

    cout << "enter the radius: ";
    cin >> r;
    
    float area = pi * r*r;
    float volume = (4/3) * pi * r * r *r;

    cout << "the area of the circle is " << area << endl << "the volume of the sphere is " << volume <<endl;
    return 0;

}