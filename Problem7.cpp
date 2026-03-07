#include<iostream>
using namespace std;
 main()
{
float side,lenght,widht,radius,base,height;
cout<<"Enter the sides of square";
cin>>side;
cout<<"Enter the lenght of rectangle";
cin>>lenght;
cout<<"Enter the widht of rectangle";
cin>>widht;
cout<<"Enter the base of triangle";
cin>>base;
cout<<"Enter the height of triangle";
cin>>height;
cout<<"Enter the radius of circle";
cin>>radius;
float Area;
 Area=side*side;
cout<<"Square"<<Area<<endl;
Area=lenght*widht;
cout<<"Rectangle"<<Area<<endl;
float pi=3.14;
Area=pi*radius*radius;
cout<<"Triangle"<<Area<<endl;
Area=0.5*(radius*radius);
cout<<"Circle"<<Area<<endl;
}

 