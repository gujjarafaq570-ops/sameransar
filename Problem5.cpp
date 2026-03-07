#include<iostream>
using namespace std;
 main()
{
int holiday;
int workingday=63;

int timeGame,diff;
cout<<"Holidays:";
cin>>holiday;
workingday=365-holiday;
timeGame=(workingday*63+holiday*127);
diff=30000-timeGame;
int hour=diff/60;
int minutes=diff%60;	
if(timeGame>30000)
{
cout<<"tom will run away:"<<hour<<"Hour"<<minutes<<"minutes";
}
else
{
cout<<"tom sleeps well"<<hour<<"Hours"<<minutes<<"minutes";
}
}