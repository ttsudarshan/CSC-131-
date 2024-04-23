#include<iostream>
using namespace std;
int main(void){

int v1, v2, v3, pv1, pv2, pv3;
int budget;
cout<<"Enter volumes and price per volume for collection 1:";
cin>>v1>>pv1;
cout<<"Enter volumes and price per volume for collection 2:";
cin>>v2>>pv2;
cout<<"Enter volumes and price per volume for collection 3:";
cin>>v3>>pv3;
cout<<"Enter Bob's Budget: ";
cin>>budget;
if (budget>0){
    cout<<"(1) Bob has some money to buy collections."<<endl;

if(budget>=(v1*pv1)+(v2*pv2)+(v3*pv3)){
    cout<<"(2) Bob has enough money to buy all three collections."<<endl;
}
else{
    cout<<"(2) Bob does not have enough money to buy all three collections."<<endl;
}

if(((budget<(v1*pv1)) && (budget<(v3*pv3))) || ((budget<(v1*pv1)) && (budget<(v2*pv2))) || ((budget<(v3*pv3)) && (budget<(v2*pv2)))) {
    cout<<"(3) At least two collections are more expensive than Bob's budget."<<endl;
}
else{
    cout<<"(3) At least two collections are cheaper than or equal to  than Bob's budget."<<endl;
}
if ((v1*pv1==v2*pv2) || (v1*pv1==v3*pv3) || (v2*pv2==v3*pv3)){
    cout<<"(4) At least two collections cost the same amount of money."<<endl;
}
else{
    cout<<"(4) No two collections have the same price."<<endl;
}
if(((budget>=v1*pv1)&& (budget<=v3*pv3) && (budget<=v2*pv2)) || ((budget>=v2*pv2) && (budget<=v1*pv1) && (budget<=v3*pv3)) || ((budget>=v3*pv3) && (budget<=v1*pv1 && budget<=v2*pv2))){
    cout<<"(5) Only one collection is cheaper than or equal to Bob's budget."<<endl;
}
else{
    cout<<"(5) More than one collection is cheaper than or equal to Bob's budget or they are all more expensive. "<<endl;
}

}
else{
    cout<<"(1) Bob does not have money to buy anything."<<endl;
}
}
