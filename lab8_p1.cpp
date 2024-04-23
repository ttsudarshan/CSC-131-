// lab 8
//swaping values of 3 integers using pointer
#include<iostream>

using namespace std;

void rotate_left(int *a, int *b, int *c);

int main(){
    int i=1; int j=2; int k=3;
    //before swapping
    cout<<"i = "<<i<<", j = "<<j<<", k = "<<k<<"."<<endl;
    rotate_left(&i, &j, &k);
    //after swapping
    cout<<"i = "<<i<<", j = "<<j<<", k = "<<k<<"."<<endl;

}


void rotate_left(int *a, int *b, int *c){
    int temp =*a;
    *a = *b;
    *b = *c;
    *c= temp;
}

