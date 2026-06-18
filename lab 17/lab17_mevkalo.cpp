/*
Mike Mevkalo
june 17 2026
lab 17
*/

#include<iostream>
#include "lab17_functions_mevkalo.cpp"

using namespace std;

int main(){ /*
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

    cout << "\n---- example theree ----" << endl;

    const int rowsize = 2;
    int n[rowsize][3] = {
        {1,2,3},
        {4,5,6}
    };

    printarray(n,rowsize);

    cout << "\n---- example four ----" << endl;

    const int studnets = 3;
    const int subjects = 4;
    int grades[studnets][subjects] = {
        {85,90,78,92},
        {70,88,84,76},
        {95,91,89,93}

    };
    int studentavg[studnets];

    studentavarage(grades,studnets,subjects,studentavg);
    printavg(studentavg, studnets);
    
*/
    cout << "\n---- Exercise A ----" << endl;
    const int sizeB = 5;
    int B[sizeB] = {0};
    int listsizeB;
    populateArray1D(B,listsizeB,sizeB);
    printelements(B,listsizeB);
    int minNumber = findMin(B,sizeB);
    cout << "The minimum number is " << minNumber << endl;

    cout << "\n---- Exercise B ----" << endl;

    int arrayNumber2D[sizeB][sizeB] = {0};
    int max = 200;
    int min = 150;
    
    populateArray2D(arrayNumber2D,sizeB,sizeB,min,max);

    int totalNumber = range2D(arrayNumber2D,sizeB,sizeB, min, max);
    cout << "\nArray has " << totalNumber << " number(s) between " << min << " and " << max << endl;
    return 0;
}
    