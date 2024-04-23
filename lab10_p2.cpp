//a program that asks the user to enter an integer n, followed by a series of n numbers and then it prints the average of the numbers
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int *arr;
    arr= (int*)calloc(n,sizeof(int));

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    float average = sum/n;
    cout << "The average is: " << average << endl;
    free(arr);
}
