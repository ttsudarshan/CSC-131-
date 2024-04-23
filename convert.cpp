#include <iostream>  
using namespace std;  
int main(void)  
{  
int a[33], number, i,binary;    
cout<<"Enter a number between 0 and 31: ";    
cin>>number; 
if(number>0 && number<31){
for(i=0; number>0; i++)    
{    
a[i]=number%2;    
number= number/2;  
}    
cout<<"In binary, your number is: ";    
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
