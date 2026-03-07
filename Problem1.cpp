#include<iostream>
using namespace std;
int main()
{
string countryName;
float discount , finalDiscount ,totalprice;

cout<<"enter the name of the country";
cin>> countryName;

cout<<" enter the price of ticket";
cin>> totalprice;

discount=totalprice*0.05;

if(countryName=="ireland")
{
discount=totalprice*0.10;
}
finalDiscount=totalprice - discount;
cout<<"Total Price is"<<finalDiscount;
}