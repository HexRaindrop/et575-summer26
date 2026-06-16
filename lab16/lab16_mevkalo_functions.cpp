/*
Mike Mevkalo
June 16, 2026
Lab 16
*/

#include <iostream>

using namespace std;

void intropinter(){
int num = 12;
char sym = '#';
string n = "Peter";

int* ptrint;
char* ptrchar;
string* ptrstring;


cout<< ptrint<< endl;
cout << ptrchar << endl;
cout << ptrstring << endl;
}

// example 2 
void a(string v){
    cout << "A = " << v << endl;
    v = "updated A";
}

void b(string& v){
    cout << "B = " << v << endl;
    v = "updated B";
}

void c(string* v){
    cout << "c = " << v << endl;
}
// example 3 

void introarray(){
    int scores[3];
    cout << scores << endl;
    cout << "first element = " << scores[0] << endl; 

    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout << "first element = " << scores[0] << endl;

    char symbols[5]{ '$', '#', '@', '!', 'G'};
    cout << "the 3rd symbol = " << symbols[2]<< endl;

    string names[] = {"peter","Annie"};
    cout << "2nd name " << names[1] << endl;

    for (int i = 0; i<5; i++){
        cout << symbols[i];
    }
    float avgscore = 0, sumscore =0;
    for (int i = 0; i<3; i++){
        sumscore += scores[i];
    }
    avgscore = sumscore/3.0;
    cout << "the avarage is " << avgscore << endl;
    
}

// example 4

void printelements(int sizearray, int arr[]){
    for (int i = 0; i < sizearray; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void updatearry(int size, int* arr){
    for (int i = 0; i< size; i++){
        cout << "enter an age: "; cin >> arr[i];
    }
}

int countadult(int size, int *arr){
    int counter = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] >= 21) counter++;
    }

    return counter;
}

void Fill_Array_Function(int sizearray, int arr[]){
    srand(time(NULL));
    for (int i = 0; i < sizearray; i++){
        arr[i] = 1 + rand() % 9;
    }
}
int Count_Even_Numbers_Function(int sizearray, int arr[]){
    int count=0;
    for (int i = 0; i < sizearray; i++){
        if (arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

