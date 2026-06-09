/*
Mike Mevkalo
lab 11, 
june 9 2026
*/

#include <iostream>

using namespace std;

int main(){
    cout << "---- eaxample 1 ----" << endl;
    int num;
    char choise;
    do{
        cout << "enter a number: " ;
        cin >> num;
        if (num%2 == 0 && num != 0){
            cout << "enter a evem number" << endl;
        }
        else if (num == 0){
            cout << "number is zero" << endl;
        }
        else {
            cout <<"number is odd" << endl;
        }
        
        cout << "do you want another run? ";
        cin >> choise;
        

    } 
    while (choise == 'y' || choise == 'Y');

    cout << "---- eaxample 2 ----" << endl;

    int sumnumbers = 0;
    int n;

    

    while (true){
        
        cout << "enter a positive number: ";
        cin >> n;
        
        if (n>0){
            sumnumbers += n;
        }
        else break;
    }

    cout << "the final sum of the numbers is " << sumnumbers << endl;

    cout << "---- eaxample 3 ----" << endl;

    int sumall = 0;
    for (int m = 1; m<=9 ; m++){
        cout << m << "\t";
        if (m == 5){
            continue;
        }
        sumall += m;
    }
    cout << endl << "total sum =" << sumall << endl;

    cout << "---- eaxample 4 ----" << endl;

    int count = 0;
    int i = 10;
    while (i>5){
        i--;
        if (i%2 == 0){
            count += i;
            continue;
        }
        count -= 3;
    }
    cout << "the final count is = "<< count << endl;



    return 0;
}