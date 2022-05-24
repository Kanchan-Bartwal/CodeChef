#include<iostream>
using namespace std;

int main()
{
    int p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4;
    
    int c=0;
    if(p1>=10)
    c++;
    if(p2>=10)
    c++;
    if(p3>=10)
    c++;
    if(p4>=10)
    c++;
    
    cout<<c<<endl;
    return 0;
}
