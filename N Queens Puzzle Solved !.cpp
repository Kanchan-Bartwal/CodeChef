#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
	    cin>>n;
	    cout<<round(pow(0.143*n,n))<<endl;
	}
	return 0;
}
