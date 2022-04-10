#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    int d[3];
    int s[3];
    for(int i=1;i<=t;i++)
    {
        cin>>d[0]>>d[1]>>d[2];
        cin>>s[0]>>s[1]>>s[2];
        
        if(d[0]+d[1]+d[2]>s[0]+s[1]+s[2])
        cout<<"Dragon"<<endl;
        else if(d[0]+d[1]+d[2]<s[0]+s[1]+s[2])
        cout<<"Sloth"<<endl;
        else
        {
            if(d[0]>s[0])
            cout<<"Dragon"<<endl;
            else if(d[0]<s[0])
            cout<<"Sloth"<<endl;
            else
            {
                if(d[1]>s[1])
                cout<<"Dragon"<<endl;
                else if(d[1]<s[1])
                cout<<"Sloth"<<endl;
                else
                cout<<"TIE"<<endl;
            }
        }
    }
    return 0;
}
