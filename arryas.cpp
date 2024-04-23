//Program that counts the number of times each one of the 10 digits appears in the array of a single digit array.
#include <iostream>

using namespace std;

int main() {
    //enter the sizes of the array
    int N, M;
    cout << "This program counts occurrences of digits 0 through 9 in an NxM array." << endl;
    cout << "Enter the size of the array (Row Column): ";
    cin >> N >> M;

    // Creating 2D array
    //N =rows
    //M=colums
    int array[N][M];

    //entering the array row-by-row
    for (int i = 0; i < N; ++i) {
        cout << "Enter row " << i << ": ";
        for (int j = 0; j < M; ++j) {
            cin >> array[i][j];
        }
    }

    // output of arrays as arryas
    int digitCount[10] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            digitCount[array[i][j]]++;
        }
    }

    // Display the total number of each occcurance
    cout << "Total counts for each digit:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Digit " << i << " occurs " << digitCount[i] << " times" << endl;
    }

    // Display the digit counts directly as a 1D array
    cout << "The digit counts directly from the 1D array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << digitCount[i] << " ";
    }
    cout << endl;

    // Display the original 2D array entered by the user
    cout << "The original 2D array entered by the user:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
