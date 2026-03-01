#include<iostream>
using namespace std;
int main()
{
int area;
int width,height;
int walls_painted;
cout<<"paint_area";
cin>>area;
cout<<"width";
cin>>width;
cout<<"height";
cin>> height;
walls_painted=area/(width*height);
cout<<"Walls painted"<<walls_painted;
}