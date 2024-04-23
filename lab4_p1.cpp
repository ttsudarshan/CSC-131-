#include<iostream>
using namespace std;
int main (void){
    int c=0,T=0,ck=0,o=0,p;
    int i=0;
    int choice,person=1;

    do{
        cout<<"Please input the favorite beverage of person "<<person++<<" Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program"<<endl;
        cin>>choice;
        i++;
        switch (choice) {
            case 1:
            c++;
            break;
            
            case 2:
            T++;
            break;
            
            case 3:
            ck++;
            break;
            
            case 4:
            o++;
            break;
            
            case -1:
            cout<<"Beverage         Number of votes"<<endl;
            cout<<"********************************"<<endl;
            cout<<"COffee           "<< c<<endl;
            cout<<"Tea              "<< T<<endl;
            cout<<"Coke             "<< ck<<endl;
            cout<<"Orange Juice     "<< o<<endl;
            break;    
}
}while(choice!=-1);
}
