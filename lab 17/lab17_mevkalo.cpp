/*
Mike Mevkalo
june 17 2026
lab 17
*/

#include<iostream>
#include "lab17_functions_mevkalo.cpp"

using namespace std;

int main(){
    const int sizea = 10;
    int a[sizea] = {0};
    int listsize;
    int targetnumber = 10;
    cout << "---- example one ----" << endl;
    fill_up_arraray(a,listsize,sizea);
    printelements(a,listsize);
    int foundindex = search(a,listsize,targetnumber);

    cout << "---- example two ----" << endl;
    intro2darray();
    return 0;
}
    