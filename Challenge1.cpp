#include<iostream>
using namespace std;
main()
{
int bill,discount,finalAmount;
cout<<"Enter your bill:";
cin>> bill;
if(bill<=5000)
{
discount=bill*5/100;

}
if(bill>=5000)
{
discount=bill*10/100;
}
finalAmount=bill-discount;
cout<<" Your discounted bill is"<<finalAmount;
}
