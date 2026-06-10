/*
in class we had trouble with git servers and had to use an online 
comipler that you sent in the zoom link. the code i made from the
comipler is here as listed.
*/


/*
Mike Mevkalo
june 10, 2026
lab 13, functions
*/

#include<iostream>

using namespace std;

void printhi(){
    cout << "hello world!" << endl;
    return;
}

void greeting (string username){
    cout << "hello " << username << endl;
}

int dbnumber(int n){
    return n*2;
    }
    
float arearectangle(float width, float lenght) {
    return width * lenght;
}

string checknumber(int number){
    if (number > 0) return "positve";
    else if (number < 0) return "negative";
    else return "zero";
    }

int areasquare(int side){
    return side * side;
    }

int positevnumber(){
    int n;
    cout << "enter a number: "; cin >> n;
    if (n>=0) return n;
    while(!(n>=0)){
        cout << "error, try again: "; cin >> n;
        if (n>=0) return n;
        }
    }
int addtion(int a, int b){
    return a+b;
}
void printresult(int area){
    cout << "the area of a square is " << area << endl;
    return;
}

int tripleaddtion(){
    return 3*(addtion(2,3));
}
    
    

/*
Mike Mevkalo
june 10, 2026
lab 13, functions
*/

#include<iostream>
//#include "lab13_functions_mevkalo.cpp"

using namespace std;

int main(){

    cout << "---- example 1 ----" << endl;
    printhi();

    cout << "---- example 2 ----" << endl;
    greeting("peter");
    string user = "annie";
    greeting(user);

    cout << "---- example 3 ----" << endl;
    int x = dbnumber(6);
    cout << x << endl;
    
    cout << "---- example 4 ----" << endl;
    float a = arearectangle(2.5,2);
    cout << a << endl;
    
    cout << "---- example 5 ----" << endl;
    string r = checknumber(-2);
    cout << r << endl;
    
    cout << "---- example 6 ----" << endl;
    int side = positevnumber();
    int asquare = areasquare(side);
    printresult(asquare);

    cout << "---- example 7 ----" << endl;
    cout << tripleaddtion() << endl;
    return 0;
}

