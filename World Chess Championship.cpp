#include<iostream>
using namespace std;

int main()
{
	//t is a variable for number of test cases
	int t;
	//taking the input of number of test cases.
	cin>>t;
	//now the other variables;
	int x;
	string s;
	int k1=0,k2=0;
	int d=0;
	//k1 & k2 are counter variables
	//d is for draw
	while(t--)
	{
		cin>>x>>s;
		for(int i=0;i<14;i++)
		{
			if(s[i]=='C')
			k2++;
			else if(s[i]=='N')
			k1++;
			else
			d++;
		}
		k1=k1*2+d;
		k2=k2*2+d;
		//these are the conditions for prize money 
		if(k1>k2)
		cout<<40*x<<endl;
		else if(k1<k2)
		cout<<60*x<<endl;
		else
		cout<<55*x<<endl;
		
		k1=0;
		k2=0;
		d=0;
	}
	 return 0;
}
