/*
Mike Mevkalo
June 3, 2026
lab7: flow control
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "\n ----- example 1 ----- " << endl;

    int n;
    bool checkpositive;
    
    cout << "enter a number: ";
    cin >> n;
    checkpositive = n> 0;
    cout << "is number " << n << " positve?: " << checkpositive << endl;

    checkpositive = -5;
    cout << "updated checkpositve = " << checkpositive <<endl;
    // by defult any number that isnt a 0 is a 1 when pushed through a bool
    
    cout << "\n ----- example 2 ----- " << endl;
    
    int c = 10;
    if (n == 0) {
        cout << "n is zero";
        c += 20;
    }
    cout << "\t updated c = " << c << endl;
    
    cout << "\n ----- example 3 ----- " << endl;

    if ( (n % 2) == 0){ cout << n << " is even" << endl;}
    else { cout << n << " is odd" << endl;}

    cout << "\n ----- example 4 ----- " << endl;
    /*
    -uv is less then 379 nm and more then or equal to 10nm
    -blue 380 to 520
    -green 521 to 590
    -red 591 to 740
    -infared more the 741
    -less then 10 undifiend
    */
    int wavelengh = 0;
    string emittedligt;
    cout << "enter a wavelengh: ";
    cin >> wavelengh;

    if       (wavelengh < 379 && wavelengh >= 10){emittedligt = "ultraviolet";}
    else if  (wavelengh >= 380 && wavelengh <= 520) {emittedligt = "blue";}
    else if  (wavelengh >= 521 && wavelengh <= 590) {emittedligt = "green";}
    else if  (wavelengh >= 591 && wavelengh <= 740) {emittedligt = "red";}
    else if  (wavelengh >= 741) {emittedligt = "infared";}
    else {emittedligt = "UNDEFIEND";}
    cout << wavelengh << " nm emits " << emittedligt << " light" << endl;

    cout << "\n ----- Lab exercise: ----- " << endl; 

    int weight_of_packege;
    float price_of_shipping;

    cout << "enter a packege weight in pounds: " << endl;
    cin >> weight_of_packege;

    if (weight_of_packege <= 2) {price_of_shipping = 5.0;}
    else if (weight_of_packege > 2 && weight_of_packege <= 5) {price_of_shipping = 8.2;}
    else if (weight_of_packege > 5 && weight_of_packege <= 10) {price_of_shipping = 10.25;}
    else if (weight_of_packege > 10 ) {price_of_shipping = 12.50;}
    else {price_of_shipping = 0;}

    cout << "A package of weight " << weight_of_packege << " costs $" << price_of_shipping;
    return 0;
}