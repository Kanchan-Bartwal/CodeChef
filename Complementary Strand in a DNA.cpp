#include<iostream>
using namespace std;

int main()
{
    short t;
    cin>>t;
    short n;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            s[i]='T';
            else if(s[i]=='T')
            s[i]='A';
            else if(s[i]=='C')
            s[i]='G';
            else
            s[i]='C';
        }
        cout<<s<<endl;
    }
    return 0;
}
