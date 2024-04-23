//Program 2
#include<iostream>
#include<math.h>
using namespace std;

int main (void)

{
    double r,d,c,a,p,as,diffrence;
    cout<<"Enter the value of the radius: ";
    cin>> r;
    //calculate diameter of a circle
    d=r*2;
    cout<<"The diameter of a circle is: "<< d << endl;
    //calculate circumference of a circle
    c=2*3.14f*r;
    cout<<"The circumference of the circle is: "<< c << endl;
    //calculate area of a circle
    a=3.14f*r*r;
    cout<<"The area of the circle is: "<< a <<endl;
    //I used diameter as one of the base length of sqaure
    //Calcuate diameter of a circle
    p=4*d;
    //calculate perimeter of a circle
    cout<<"The perimeter of a square is: "<< p<<endl;
    //area of a square
    as=d*d;
    cout<<"The area of the square is: "<< as << endl;
    //difference
    diffrence=as-a;
    cout<<"The difference between the area of the square and the circle is: "<< diffrence<< endl;

}
