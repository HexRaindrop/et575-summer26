/*
Mike Mevkalo
June 4, 2026
lab9: switch case
*/

#include<iostream>

using namespace std;

int main(){
    cout << "\n---- example 1 ----" << endl;

    int dayoff;

    cout << "select a day off" << endl;
    cout << "1 for monday" << endl;
    cout << "2 for tuesday" << endl;
    cout << "3 for wednesday" << endl;
    cout << "4 for thursday" << endl;
    cout << "5 for friday" << endl;

    cout << "sel day: ";
    cin >> dayoff;

    switch(dayoff){
        case 1:
            cout << "you are off monday" << endl;
            break;
        case 2:
            cout << "you are off tuesday" << endl;
            break;
        case 3:
            cout << "you are off wednsday" << endl;
            break;
        case 4:
            cout << "you are off thursday" << endl;
            break;
        case 5:
            cout << "you are off friday" << endl;
            break;
        default:
            cout << "wrong day off" << endl;
            break;
    }

    cout << "\n---- example 2 ----" << endl;

    char gender;
    string selectedgender;

    cout << "select a gender \nm for male\nf for female\no for other\nsel gender: ";
    cin >> gender;
    
    switch(gender)
     {
        case 'm': case 'M':
            selectedgender = "male";
            cout << "you have selected male" << endl;
            break;
        case 'f': case 'F':
            selectedgender = "female";
            cout << "you have selected female" << endl;
            break;
        case 'o': case 'O':
            selectedgender = "other";
            cout << "you have selected other" << endl;
            break;
        default:
            cout << "selected unknown";
        }
    
    cout << "\n-------exercise -------" << endl;

    int user_num;
    char user_answer;

    cout << "select a number: ";
    cin >> user_num;
    cout << "do you want to double your number? [y/n]:  ";
    cin >> user_answer;

    switch(user_answer){
        case 'y': case 'Y':
            user_num = user_num * 2;
            break;
        case 'n': case 'N':
            break;
        default:
            user_num = 0;
    }
    cout << "The number is set to " << user_num << endl;

    return 0;
}
