//Program 1
#include <iostream>
using namespace std;

int main(void)

{
    int w, d, h, m;
    int rm;
    cout << "Enter the number of weeks:\n";
    cin >> w;
    cout << "Enter the number of days:\n";
    cin >> d;
    cout << "Enter the number of hours:\n";
    cin >> h;
    cout << "Enter the number of minutes:\n";
    cin >> m;
    
    rm=(w*7*24*60)+(d*24*60)+(h*60)+m;
    cout <<"The total number of minutes is: "<< rm<<endl;
    return 0;

}
