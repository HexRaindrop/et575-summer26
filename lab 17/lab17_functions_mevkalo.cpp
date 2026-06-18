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
        cout << arr[i] << "\t";
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

    cout << "\nthe temperature in first row second col " << temperture[0][1];
}


void printarray(int arr[][3], int rows){
    for (int r = 0; r < rows; r++){
        for (int c = 0; c < 3; c++){
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }
}

void studentavarage(int(*arr)[4], int sizestudents, int sizesubjects, int *avg){
    int index = 0;
    
    for (int r = 0; r<sizestudents; r++){
        int sum = 0;
        for (int c = 0; c<sizesubjects;c++){
            sum +=arr[r][c];
        }
        avg[index] = sum/sizesubjects;
        index++;
    }
}
void printavg(int *avg, int sizestudents){
    for (int i = 0; i< sizestudents; i++){
        cout << "student " << i+1 << " average grade =" << avg[i]<<endl;
    }
}
void populateArray1D(int *arr, int &numberuserindex, int sizearry)
{
    int number, index = 0;
    srand(time(0));
    do {
        number = (1+rand()%255);
        arr[index] = number;
        index++;
    } while(number>0 && index < sizearry);

    numberuserindex = index;
}
int  findMin (int *arr, int size_arr){
    int lowest_number_index = 0;
    for (int i = 0; i < size_arr; i++){
        if (arr[i] < arr[lowest_number_index]){
            lowest_number_index = i;
        }
    }
    return arr[lowest_number_index];
}

void populateArray2D(int (*arr)[5], int size_arr_r, int size_arr_c, int minSize, int maxSize){
    srand(time(0));
    for (int r = 0; r<size_arr_r ; r++){
        for (int c = 0; c < size_arr_c; c++){
            arr[r][c] = (minSize+(rand()%((maxSize-minSize)+1)));
        }
    }
}

int range2D(int (*arr)[5],int size_arr_r, int size_arr_c, int minSize, int maxSize){
    int totalNumber_count = 0;
    for (int r = 0; r < size_arr_r; r++){
        for (int c = 0; c < size_arr_c; c++){
            if (arr[r][c] >= minSize && arr[r][c] <= maxSize) totalNumber_count ++; 
        }
    }
    return totalNumber_count;
}