#include<iostream>
using namespace std;
int main (void){
    
  int space=0,Tab=0,nc=0;
  char c;
  cout << "Enter a sentence (end by  . or ? or !): ";
  while (cin.get(c) && c!='.' && c!='?' && c!='?' && c!='!'){
    switch(c){
        case ' ':
        space++;
        break;
        case '\t':
        Tab++;
        break;
        case '\n':
        nc++;
        break;
    }
  }
cout << "Number of space characters: "<< space <<endl;
cout << "Number of new line chaaracter: "<< nc <<endl;
cout << "Number of tabs : "<< Tab <<endl;
}