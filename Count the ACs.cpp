#include<iostream>
using namespace std;

int main()
{
    short t;
    cin>>t;
    short p;
    while(t--)
    {
        cin>>p;
        if(p<=10)
            cout<<p<<endl;
        else if(p%100==0 && p<=1000)
            cout<<p/100<<endl;
        else if(p/100+p%100<=10)
            cout<<p/100+p%100<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
