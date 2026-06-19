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

float validatnumber(){
    float n;
    do {
        cout << "enter a number: "; cin >> n;
        if (!(cin>>n)){
            cout << "invalid datatype!" << endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }
        else {
            return n;
        }
    } while(true);
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