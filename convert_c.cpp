// I accidentlly submitted the old file earlier please use this one for grading
#include <iostream>  
using namespace std;  
int main(void)  
{  
int a[33], number, i,base;    
cout<<"Enter a number between 0 and 31: ";
cin>>number;

if(number>0 && number<31){
    cout<<"Enter a base between 2 and 9: ";
cin>>base;
for(i=0; number>0; i++)    
{    
a[i]=number%base;    
number= number/base;  
}    
cout<<"In " <<"base "<<base<< ", "<< "your number is: ";    
for(i=i-1 ;i>=0 ;i--)    
{
    cout<<a[i];    
}
cout<<endl;
} 
else{
    cout<<"The number must be between 0 and 31"<<endl;
}
}