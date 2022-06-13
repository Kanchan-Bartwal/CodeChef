#include<iostream>
using namespace std;

int main()
{
    short t; //as test cases ain't that large
    cin>>t;
    short x, y; 
    while(t--)
    {
        cin>>x>>y;
        if(y>=x)
        cout<<"0"<<"\n";
        else
        cout<<x-y<<"\n";
    }
    return 0;
}
