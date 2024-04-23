//Problem 1
#include<iostream>
using namespace std;
int main (void)
{
    int a,b,c,d;
    int temp;
    cout<<"Enter 4 integers (a b c d):";
    cin>> a>>b>>c>>d;
    //for a
    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    
    if(a>d){
        temp=a;
        a=d;
        d=temp;
    }
    //for b
    if (b>a){
        temp=b;
        b=a;
        a=temp;
    }
    if (b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if (b>d){
        temp=b;
        b=d;
        d=temp;
    }
    //for c
        if (c>a){
        temp=c;
        c=a;
        a=temp;
    }
    if (c>b){
        temp=c;
        c=b;
        b=temp;
    }
    if (b>d){
        temp=c;
        c=d;
        d=temp;
    }
    //for d
        if (d>a){
        temp=d;
        d=a;
        a=temp;
    }
    if (d>b){
        temp=d;
        d=b;
        b=temp;
    }
    if (d>c){
        temp=d;
        d=c;
        c=temp;
    }
    
    
    cout<<"THe integers in order: "<<d<<" "<<c<<" "<<b<<" "<<a<<" "<<endl;
    
}
