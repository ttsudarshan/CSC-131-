//program 1
//Program to calculate area of a right angled triangle.
#include<iostream>
#include<math.h>
using namespace std;

int main(void)


{
    double a, b, area,c, peri;
    cout<<"This program computes the area and perimeter of a right triangle."<< endl;
    cout<<"Enter the value of leg a: ";
    cin>> a;
    cout<<"Enter the value of leg b: ";
    cin>> b;
    c=sqrt(a*a+b*b);
    area=(a*b)/2;
    cout<<"The area of a triangle is "<< area <<"."<< endl;
    peri=a+b+c;
    cout<<"The The perimeter of the triangle is "<< peri <<"." << endl;

}