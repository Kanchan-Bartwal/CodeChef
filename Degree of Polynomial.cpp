#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,ans=0;
    while(t--)
    {
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            ans=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
