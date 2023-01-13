#include<iostream>
using namespace std ;
int main()
{
    int x,y ;

    cout<<"Enter a 2 number "<<endl;
    cin>>x>>y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"without using third variable x= "<<x<<endl<<"y= "<<y<<endl;
    return 0;
}
