#include<iostream>
using namespace std;

int main (void){
    int w,x,y,z;
    cout<<"Enter 4 integers (w x y z): ";
    cin>>w>>x>>y>>z;
    //condition 1
    if (x<w && x<y && x<z){
        cout<<"Condition 1 is true"<<endl;
    }
    else{
    cout<<"Condition 1 is false"<<endl;
    }
    //condition 2
    if(w+x>y+z or w+x==y+z){
        cout<<"Condition 2 is true"<<endl;
    }
    else
    cout<<"Condition 2 is false"<<endl;

//condition 3
if(w%2==0 && x%2==0 && y%2==0 && z%2==0){
        cout<<"Condition 3 is true"<<endl;
    }
    else
    cout<<"Condition 3 is false"<<endl;
    
}


    