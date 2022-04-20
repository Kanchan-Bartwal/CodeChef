#include<iostream>
using namespace std;

int main()
{
    int t;//input test case
    cin>>t;//taking input
    
    int x, y; //locations of police and thief respectively
    while(t--)
    {
        int c=0;
        cin>>x>>y;
        if(x==y)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(x<y)
        {
            while(x<y)
            {
                x=x+2;
                y=y+1;
                c++;
            }
            if(x==y)
                {
                   cout<<c<<endl;
                   continue;
                }
        }
        else if(x>y)
        {
            while(x>y)
            {
                x=x-2;
                y=y-1;
                c++;
            }
            if(x==y)
                {
                   cout<<c<<endl;
                   continue;
                }
        }
    }
    return 0;
}
