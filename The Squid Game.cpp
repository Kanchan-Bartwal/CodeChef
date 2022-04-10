#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int min;
    int sum;
    while(t--)
    {
        min=INT_MAX;
        sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
            min=a[i];
            sum+=a[i];
        }
        cout<<sum-min<<endl;
    }
    return 0;
}
