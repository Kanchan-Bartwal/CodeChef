#include<iostream>
using namespace std;

int main()
{
    short t; //as number of test case value is small
    cin>>t;
    short n,x;
    while(t--)
    {
        cin>>n>>x;
        if(n%6==0)
        cout<<(n/6)*x<<"\n";
        else
        cout<<(n/6)*x +x<<"\n"; 
        //for the remainder we will form one group and it will always be less than 6
    }
    return 0;
}
