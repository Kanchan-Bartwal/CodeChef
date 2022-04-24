#include<iostream>
using namespace std;

int main()
{
    int t;//this variable is for the number of test cases
    cin>>t;//taking the input
    int x;
    while(t--)
    {
        cin>>x;
        //here goes our logic
        cout<<max((int)(0.1*x),100)<<endl;
    }
    return 0;
}
