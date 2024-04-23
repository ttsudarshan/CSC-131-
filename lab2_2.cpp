//Program 1
#include <iostream>
using namespace std;

int main(void)

{
    int minutes,weeks,days,hours;
    cout << "Enter the number of minutes:\n";
    cin >> minutes;
    weeks = minutes / (7*24*60);
    minutes=minutes%(7*24*60);
    days=minutes /(24*60);
    minutes=minutes%(24*60);
    hours=minutes/60;
    minutes=minutes%60;

    
    cout << "This represents: " << weeks << " weeks , "<< days << " days,"<< hours <<" hours "<< "and " << minutes << " minutes" <<endl;
}