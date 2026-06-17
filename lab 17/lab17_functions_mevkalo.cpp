/*
Mike Mevkalo
june 17 2026
lab 17
*/

#include<iostream>

using namespace std;

void fill_up_arraray(int *arr, int &numberuserindex, int sizearry)
{
    int number, index = 0;
    do {
        cout << "enter a positve number: "; cin >> number;
        if (number > 0){
            arr[index] = number;
            index++;
        }
    } while(number>0 && index < sizearry);

    numberuserindex = index;
}

void printelements(int *arr, int numberuserindex){
    for (int i = 0; i < numberuserindex; i++){
        cout << arr[i] << "/t";
    }
    cout << endl;
}

int search(int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while (!found && (index<numberuserindex)){
        if (targetnumber == arr[index]){
            found = true;
        }
        else index++;
    }
    if (found) return index;
    else return -1;
}

void intro2darray(){
    int graylevel[255][10];

    int temperture[2][5] = {
        {78,56,60},
        {100,89,92,90,80}
    };

    cout << "the temperature in first row second col " << temperture[0][1];
}