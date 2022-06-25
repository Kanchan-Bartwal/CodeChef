#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int x;
    while(t--)
    {
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        short k=-1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                if(a[i-1]+a[i]<=x)
                swap(a[i-1],a[i]);
                else
                {
                    k=0;
                    break;
                }
            }
        }
        if(k!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
