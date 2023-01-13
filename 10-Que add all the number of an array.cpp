#include<iostream>
using namespace std ;
int main()
{
    float a[10];
    int i,sum=0;

    cout<<"Enter a 10 number "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum is 10 number "<<sum<<endl;
    return 0;
}
