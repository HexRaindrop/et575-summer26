#include<iostream>

using namespace std;

int user_input_3to12(){
    int userinput;
    
    do{
        
        cout << "please enter a input between 3 and 12: "; cin >> userinput;
        if (!(userinput >= 3 && userinput <= 12)) cout << "please enter a number bettween 3 and 12" << endl;
    }
    while (!(userinput >= 3 && userinput <= 12));
    return userinput;
}

int rand_num(){
    int rand_number;
    srand(time(0));
    rand_number = (2+rand()%5);
    return rand_number;
}
int vol_shef(int r, int m){
    return ((4/3)*3.13)*(r*r*r) * m;
}
int main(){
    int multiplyer = rand_num();
    int user_int = user_input_3to12();
    vol_shef(user_int, multiplyer);
    return 0;
}