#include<iostream>
using namespace std;
int main()
{
	//t is a variable for number of test cases
	int t,a,b,x,y;
	cin>>t; //input the no of test caes
	while(t--) //loop to go through all test cases
	{
		cin>>a>>b>>x>>y;
		//the logic is all simple for getting funded from gorvernment or not
		if(x*y>=a*b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
