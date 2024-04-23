//C++ program to that reads string from the user and splits it into even odd position
#include<iostream>
#include<cstring>

using namespace std;


int main(){

    char str[40+1];

    char even[21];
    char odd[21];
    cout<<"Enter a string (40 characters maximum): ";
    cin>> str;

    char *p =str;
    char *o =odd;
    char *e =even;
    char *p_start= str;

    for (int i=0; *p !=0; i++){
        
        if(i%2 == 0){
            *e = *p;
            e++;
        }else{
            *o = *p;
            o++;
            
        }

    p++; //increment of the pointer




    } 

        *e = '\0';
        *o = '\0';

    cout<<"The even string is: "<<even<<endl;
    cout<<"The odd string is: "<<odd<<endl;


}