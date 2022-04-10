#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char first, second, third;
    char x,y;
    for(int i=1;i<=t;i++)
    {
        cin>>first;
        cin>>second;
        cin>>third;
        
        cin>>x;
        cin>>y;
        
        if(x==first||y==first)
        {
            cout<<first<<endl;
            continue;
        }
        
        else if(x==second||y==second)
        {
            cout<<second<<endl;
            continue;
        }
        else
        {
            cout<<third<<endl;
            continue;
        }
    }
    return 0;
}
