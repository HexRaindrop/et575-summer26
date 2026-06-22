#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 5;

bool checkUnique(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                return false;
            }
        }
    }
    return true;
}

// Generate winning digits
void winningDigits(int winning[]){
    do{
        for (int i = 0; i < SIZE; i++){
            winning[i] = rand() % 19 + 1; // 1 - 19
        }
    } while (!checkUnique(winning, SIZE));
}

// Get user ticket numbers
void userTicket(int ticket[]){
    do{
        cout << "Enter 5 unique numbers between 1 and 19:\n";
        for (int i = 0; i < SIZE; i++){
            cout << "Number " << i + 1 << ": ";
            cin >> ticket[i];

            while (ticket[i] < 1 || ticket[i] > 19){
                cout << "Invalid input. Enter a number between 1 and 19: ";
                cin >> ticket[i];
            }
        }

        if (!checkUnique(ticket, SIZE)){
            cout << "\nDuplicate numbers are not allowed. Please enter all numbers again.\n\n";
        }

    } while (!checkUnique(ticket, SIZE));
}

// Check for duplicate numbers

// Compare corresponding positions and count matches
int checkWinner(int winning[], int ticket[]){
    int matches = 0;

    for (int i = 0; i < SIZE; i++){
        if (winning[i] == ticket[i]){
            matches++;
        }
    }

    return matches;
}

// Display results
void printResult(int winning[], int ticket[], int matches){
    cout << "\nWinning digits = ";
    for (int i = 0; i < SIZE; i++){
        cout << winning[i] << "\t";
    }

    cout << "\nUser ticket    = ";
    for (int i = 0; i < SIZE; i++){
        cout << ticket[i] << "\t";
    }

    cout << "\nMatch numbers  = " << matches << endl;
}

int main(){
    srand(time(0));

    int winning[SIZE];
    int ticket[SIZE];

    winningDigits(winning);
    userTicket(ticket);

    int matches = checkWinner(winning, ticket);

    printResult(winning, ticket, matches);

    return 0;
}