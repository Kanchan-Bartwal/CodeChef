#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,n;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>n;
        if(n%2==0)
        cout<<max(a,b)/min(a,b)<<endl;
        else
        cout<<max(2*a, b)/min(2*a,b)<<endl;
    }
    return 0;
}
