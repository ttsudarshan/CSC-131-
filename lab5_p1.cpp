#include<iostream>
using namespace std;
int main(void){
    char c;
    int array[26];
    int index;
    cout<<"Enter a sentence (end by '.'): ";
    while (cin.get(c) && c!='.'){
    c=tolower(c);
       index = c-'a';
       array[index]++;
    }
    for(int i=0; i<26; i++){
        char ch=i+'a';
        if (array[i]>0){
            cout<<"The occurance of '"<< ch << "' is: "<< array[i]<<endl;
        }
    }
     
}