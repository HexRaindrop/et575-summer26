/*
Mike Mevkalo
june 2, 2026
lab 5 string methods
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    
    cout << "\n" << string(10,'-') << "example one" << string(10,'-') << endl;

    string username = "peterpan123";
    cout << "the fourth charecter of username =" << username[3] << endl;
    cout << "the sixth charecter in the username =" << username.at(5) << endl;

    cout << "\n" << string(10,'-') << "example two" << string(10,'-') << endl;

    int num_username = username.length();
    cout << "there are " << num_username << " charecters in username" <<endl;
    
    cout << "\n" << string(10,'-') << "example theree" << string(10,'-') << endl;

    string n = "never";
    string m = " agaian";
    cout << n+m <<endl;

    cout << "\n" << string(10,'-') << "example four" << string(10,'-') << endl;

    cout << "extract word =" << n.substr(1,4) << endl;

    cout << "\n" << string(10,'-') << "example five" << string(10,'-') << endl;

    cout << "username is before = " << username << endl;
    username.insert(4,"LAND");
    cout << "username is after = " << username << endl;

    cout << "\n" << string(10,'-') << "example six" << string(10,'-') << endl;

    username.append("END");
    cout << username << endl;

    cout << "\n" << string(10,'-') << "example seven" << string(10,'-') << endl;
    
    string name = "Peter Pan";

    cout << "the name before the replace = " << name << endl;
    name.replace(1,4, "atrick");
    cout << "the name after the replace = " << name << endl;
    
    cout << "\n" << string(10,'-') << "example eight" << string(10,'-') << endl;

    name.erase(9,2);
    cout << name << endl;

    cout << "\n" << string(10,'-') << "example nine" << string(10,'-') << endl;

    cout << username << endl;
    int index_r = username.find("pan");
    cout << "index of pan is = " << index_r << endl;
    int never = username.find("NEVER");
    cout << "index of NEVER = " << never << endl;

    return 0;
}