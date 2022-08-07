#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float radius, area;
    cout<<"enter the radius : "<<endl;
    cin>>radius;
    area = (3.14)*(radius*radius);
    cout<<"area of the circle of radius "<<radius<<" is: "<<area;

    return(0);
}