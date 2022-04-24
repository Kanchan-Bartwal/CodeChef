#include<iostream>
using namespace std;

int main()
{
    int t; //again it is the variable to take no of test cases..duh
    cin>>t; //taking the input
    
    int a,b;
    while(t--)//loooopppp
    {
        cin>>a>>b;
        
        //here goes our logic
        if(a*10>b*5)
        cout<<"FIRST"<<endl;
        else if(b*5>a*10)
        cout<<"SECOND"<<endl;
        else
        cout<<"ANY"<<endl;
    }
    return 0;
}
