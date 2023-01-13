#include<iostream>
using namespace std ;
int main()
{
    float x,y,z ;
    float avg,sum=0;

    cout<<"Enter a 3 number "<<endl ;
    cin>>x>>y>>z;
    sum=x+y+z ;
    avg=sum/3.0;
    cout<<"average of 3 number "<<avg<<endl ;
    return 0;
}
