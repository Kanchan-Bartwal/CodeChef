#include<iostream>
#include<map>
#include<climits>
using namespace std;

int main()
{
    short t;
    cin>>t;
    short n;
    int max;
    while(t--)
    {
        cin>>n;
        max=INT_MIN;
        short a[n];
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
            
            max=std::max(max, freq[a[i]]);
        }
        cout<<n-max<<endl;
    }
    return 0;
}
