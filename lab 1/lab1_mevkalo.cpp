/*
Mike Mevkalo
May 28, 2026
lab 1: iostream
*/
/*
//in class code /notes 

#include <iostream>
#include <string>
using namespace std;
int main(){
    string username;
    username = "PeterPan";
    cout << "U = " << username<<endl;
    cout << "enter anouther username: ";
    cin >> username;
    cout << "Updated username: " << username<<endl;

// example 3: declaring charectr variable

char symbol = '%';
cout << "chareacter =" << symbol<< endl;
symbol = 64;
cout<< "Updated charecter =" << symbol<<endl;

//initaliz a vale for an identifer

char s(35);
cout << "symbol = " << s <<endl;

return 0;
}
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
    cout<< "please enter a gender \n\t[m for male, f for female, o for other]\t:";
    cin >> gender;

    // gender var converstion
    if (gender == "m" or gender == "M"){
        gender = "male";
    }
    if (gender == "f" or gender == "F"){
        gender = "female";
    }
    if (gender == "o" or gender == "O"){
        gender = "other";
    }

    // output
    cout <<  string(50,'-') << endl;
    cout << "Entered country:\t" << country << endl;
    cout << "entered gender :\t" << gender << endl;
    cout <<  string(50,'-') << endl;
    return 0;
}
