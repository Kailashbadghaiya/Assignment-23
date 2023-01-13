#include<iostream>
using namespace std ;
int main()
{
    int x,y,temp=0;

    cout<<"Enter a 2 number "<<endl;
    cin>>x>>y ;

    temp=x;
    x=y;
    y=temp;

    cout<<"swap values is x= "<<x<<endl;
    cout<<"swap values is y= "<<y;
    return 0;
}
