/*
Mike Mevkalo
May 28, 2026
lab 1: iostream
*/

#include <iostream>
#include <string>


using namespace std;
int main(){
    //varibles 
    string country;
    string gender;

    // input
    cout << "please enter a countery of origin\t\t:";
    cin >> country;
    cout<< "please enter a gender \n[m for male, f for female, o for other]\t :";
    cin >> gender;

    // gender var converstion
    if (gender == "m"){
        gender = "male";
    }
    if (gender == "f"){
        gender = "female";
    }
    if (gender == "o"){
        gender = "other";
    }

    // output
    cout << "Entered country:\t" << country << "\n";
    cout << "entered gender :\t" << gender << "\n";
    return 0;
}
