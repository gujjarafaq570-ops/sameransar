# include <iostream>
using namespace std;
main () 
{ 
int no1,no2;
string op;
cout<<"Welcome to the caluculator"<<endl;
cout<<"enter yourfirst number";
cin>>no1;
cout<<"Enter your second number";
cin>> no2;
cout<<"Enter operator";
cin>> op;


if (op=="+")
{
cout<<no1<<"-"<<no2<<"="<<no1-no2;
}
if(op=="-")
{
cout<<no1<<"+"<<no2<<"="<<no1+no2;
}
if(op=="*")
{
cout<<no1<<"/"<<no2<<"="<<no1+no2;
}
if(op=="/")
cout<<no1<<"*"<<no2<<"="<<no1/no2;


}