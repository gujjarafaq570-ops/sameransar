#include<iostream>
using namespace std;
 main()
{
float roseP=2;
float whiteP=4.10;
float tulipsP= 2.50;
float no1 ,no2, no3, totalPrice ,discount ;
float finaldiscount
cout<<" Enter the price of Red Roses";
cin>> no1;
cout<<" Enter the price of White Roses";
cin>> no2;
cout<<"Enter the price of Tulips";
cin>> no3;
totalPrice= no1*roseP+ no2*whiteP +no3*tulipsP;

if(totalPrice>200)
{
discount=totalPrice*0.2;
}
finaldiscount=totalPrice-discount;
cout<<"Price after Discount"<<finaldiscount;
}
