/*
Mike mevaklo 
june 17 2026
lab 18
*/

#include<iostream>

using namespace std;

void checknumber(){
    int num;
    cout << "enter a numebr: "; cin >> num;
    if (cin.fail()){
        cout << "error, wrong data type" << endl;
    }
    else {
        cout << "entered number = " << num << endl;
    }
    cin.clear();
    cin.ignore(1000,'\n');

    cout << "end of function" << endl;
}

// float validatnumber(){
//     float n;
//     do {
//         cout << "enter a number: "; 
//         if (!(cin>>n)){
//             cout << "invalid datatype!" << endl;
//             cin.clear();
//             cin.ignore(1000,'\n');
//         }
//         else {
//             return n;
//         }
//     } while(true);
// }
float validatnumber() {
    float n;
    while (true) {
        cout << "enter a number: ";
        if (!(cin >> n)) {
            cout << "invalid datatype!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            return n;
        }
    }
}
#include<fstream>

void iofiles(){
    ifstream fin;
    ofstream fout;
    fin.open("sampleTXT_file.txt");

    string line;
    int linecounter = 1;

    while(getline(fin,line)){
        cout << "line " << linecounter << " = \t" << line << endl;
        linecounter++;
    }
    fin.close();
}

void writefile(){
    ofstream fout;

    fout.open("outputfile.txt");
    fout << "GOOD MORNING!" << endl;
    for (int n = 3; n>3; n--){
        fout << n << endl;
    }
    fout << "END of file" << endl;

    fout.close();
}

void appendfile(string filename){
    ofstream fout;
    fout.open(filename, ios :: app);
    fout << "mike mevkalo" << endl;
    fout.close();
}


float calculate(float num1, float num2){
    char op;
    while (true){
        cout << "Enter an operator (+, -, *, /, %): ";
        if (!(cin >> op)){
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        switch (op){
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 == 0)
                {
                    cout << "Cannot divide by zero!" << endl;
                    continue;
                }
                return num1 / num2;
            case '%':
                if (num2 == 0)
                {
                    cout << "Cannot modulo by zero!" << endl;
                    cout << "Invalid operator! Try again." << endl;
                    continue;
                }
            default:
                cout << "Invalid operator! Try again." << endl;
        }
    }
}

void createFile(string fullName){
    ofstream file("data_user.txt");
    if (!file){
        cout << "Error creating file!" << endl;
        return;
    }
    file << "This is my output file – " << fullName << ".\n";
    file.close();
}
void appendToFile(string message){
    ofstream file("data_user.txt", ios::app);
    if (!file){
        cout << "Error opening file!" << endl;
        return;
    }
    file << message << endl;
    file.close();
}

void createAndOverwriteFile(string fileName, string text){
    ofstream file(fileName); 
    if (!file){
        cout << "Error creating file!" << endl;
        return;
    }
    file << text << endl;
    file.close();
}