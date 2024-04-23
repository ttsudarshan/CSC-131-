//Lab6
//To generate a matrix and find the number of prime numbers in it. 
#include<iostream>
#include<random>
using namespace std;

bool is_prime(int n){
    for (int d =2; d<n ; d++) {
        if (n% d== 0){
            return false;
        }
    }
    return true;
}
int main(void){
    int c, r, n;
    int array[100][100];
    int count=0;
   cout<<"Enter the Size of an array: ";
   cin>> n;
    cout<<"The randomly generated matrix is: "<<endl;
    for (int r = 0; r < n; r++){
        for(int c = 0; c< n; c++){
            array[r][c]= rand() % 90 +10;
            cout<< array[r][c]<< " ";
            }
            cout << "\n";
        }
    
cout<< "Found prime numbers: "; 
    for (int r = 0; r < n; r++){
        for(int c = 0; c< n; c++){
            bool prime = is_prime(array[r][c]);
            if (prime){
                cout<< array[r][c]<<", ";
                count++;
            }

        }
        }
cout<<"\n";
cout<<"There are "<< count <<" prime numbers detected."<<endl;
}








