//a program to take input as a string which is URL and then removes file name in URL
#include<iostream>
#include<stdio.h>

using namespace std;

void remove_filename(char *url){

    while (*url != '\0'){
         url++;
    }
    while (*url != '/' ){
        url--;
    }
    *url = '\0';
}
//http://www.google.com/index.html

int main (){
    char site[100];
    cout<< "Pleae input your URL: ";
    cin>>site;

    cout << "Your URL with filename: ";

    cout <<site<< endl;

    remove_filename(site);
    cout << "Your URL without filename: "<<site; 
    cout << endl;


}