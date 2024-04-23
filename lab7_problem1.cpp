//lab7
//To find the area and volume of a prism by calling function
#include<iostream>
using namespace std;

int compute_area(int l, int w, int h);
int compute_volume(int l, int w, int h);
 
int main(void)
{
  int l, w, h;
  //if one of the value is negative
  do{
      cout<<"Enter the dimensions of the square prism (l, w, h): ";
      cin>>l>>w>>h;
      if(l<0 || w<0 || h<0){
        cout<<"Please enter the positive value!"<<endl;
      }
  }while(l<0 || w<0 || h<0);
  
  cout<<"The area of the prism is: "<<compute_area(l, w, h)<<endl;
  cout<<"The volume of the prism is: "<<compute_volume(l, w, h)<<endl;

  return 0;

}
//for area
int compute_area(int l, int w, int h){
  return ((2*l*h) + (2*l*2) + (2*w*h));
}
//volume
int compute_volume(int l, int w, int h){
    return (l*w*h);
}