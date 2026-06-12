/*
Mike MEvkalo
june 10, 2026
lab 12, nested loops
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "\n---- example 1 ----" << endl;
    int i =0;
    while (i++<3){
        cout << " outer loop = " << i << endl;
        int j = 0;
        while (j++ < 5) {
            cout << "\t" << j;
        }

    }
    cout << "\n---- example 2 ----" << endl;

    int row = 0, seats = 0;
    cout << "enter the number of rows: "; cin >> row;
    cout << "enter hr number of seats: "; cin >> seats;
    for (int r = 3; r <= row; r++){
        for (int c = 1; c <= seats; c++){
            cout << "row " << r << " seat  " << c << "\t";
        }
        cout <<endl;
    }

    cout << "\n---- example 3 ----" << endl;
    const int grathsize = 9;
    for (int row = 1; row <= grathsize ; row++){
        for (int col = 1 ; col <= grathsize ; col++){
            if (col == 5 || row == 5) cout << " x ";
            else cout << " . ";
        }
        cout << endl;
    }

    cout << "\n---- example 4 ----" << endl;
    
    for (int row = 1; row <= grathsize ; row++){
        for (int col = 1 ; col <= grathsize ; col++){
            if  ((row >=3 && row <=8 && col >=3 && col <=4) ||
                (row >=5 && row <=6 && col >=5 && col <=6) ||
                (row >=3 && row <=8 && col >=7 && col <=8))
                cout << " x ";
            else cout << " . ";
        }
        cout << endl;
    }

    cout << "---- excersise A ----" << endl;
    const int random_num = 5;
    int user_guess;
    do {
        cout << "enter a guess [1 - 10] : "; cin >> user_guess;
        if (!(user_guess >=1 && user_guess <= 10)) {
            cout << string(29,'-') << "error" << string(29,'-') << "\n| the entered guess is not bettween 1 or 10. please try again |" << endl << string(63,'-')<< endl;}
        else if (user_guess == random_num) {
            cout << "you guessed the right number!";
            break;
        }
        else if (user_guess > random_num) cout << "your guess is higher then the number";
        else cout << "your guess is less then the number";
        cout << "\ntry again! \n";
    }
    while(user_guess != random_num);

    cout << "\n---- excersise B ----" << endl;
    int gridsize = 10;
    for (int row = 1; row <= gridsize ; row++){
        for (int col = 1 ; col <= gridsize ; col++){
            if  ((row >=3 && row <=8 && col >=3 && col <=4) ||
                (row >=7 && row <=10 && col >=5 && col <=6) ||
                (row >=3 && row <=8 && col >=7 && col <=8))
                cout << " & ";
            else cout << " . ";
        }
        cout << endl;
    }
    return 0;
}
