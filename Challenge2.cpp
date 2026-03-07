# include <iostream>
using namespace std;
main () 
{ 
int salary=1000;
int laptopPrice=50000;
int advancepercent=50;
 int month=6;
int totalsalary=(salary*50/100)*month;
if(totalsalary>=laptopPrice)
{
cout<<"you buy a laptop";
} 
if(totalsalary<laptopPrice)
{
int requiredMonth=laptopPrice/(salary*50/100);
cout<<"Month required to buy a laptop"<<requiredMonth;
}
}