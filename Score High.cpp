#include<iostream>
using namespace std;

int main()
{
    int t,n,na,nb,nc,nd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>na>>nb>>nc>>nd;
        
        cout<<max(na,max(nb,max(nc,nd)))<<endl;
    }
    return 0;
}
