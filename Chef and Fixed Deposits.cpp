#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,x;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>x;
        vector<int> v;
        int k;
        for(int j=0;j<n;j++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        int sum=0;
        int count=0;
        for(int j=n-1;j>=0;j--)
        {
            sum=sum+v[j];
            count++;
            if(sum>=x)
            {
                cout<<count<<endl;
                break;
            }
        }
        if(sum<x)
        cout<<"-1"<<endl;
    }
    return 0;
}
