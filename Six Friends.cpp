#include<iostream>
using namespace std;

int main()
{
    int t;//test case obivously
    cin>>t;
    int x,y;
    while(t--)//to use all of them
    {
        cin>>x>>y;
        //finding the minimum and output
        cout<<min(3*x,2*y)<<endl;
    }
    return 0;
}
