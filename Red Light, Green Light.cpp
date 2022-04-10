#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    int c;
    while(t--)
    {
        c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>k)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
