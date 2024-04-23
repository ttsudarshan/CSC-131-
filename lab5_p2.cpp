#include<iostream>
using namespace std;
int main(void){
    int age;
    int array[100]={0};
    int index;
    

    while (age!=-99){
     cout<<"Please input an age between age 1 and 100, put -99 to stop: ";
     cin>>age;
     array[age-1]++;
    }
     for(int i=0; i<100; i++){
        if (array[i]>0){
            cout<<"The occurance of '"<< i+1 << "' is: "<< array[i]++<<endl;
        }
     
}
}

