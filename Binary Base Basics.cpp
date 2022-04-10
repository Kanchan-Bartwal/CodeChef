#include<iostream>
using namespace std;

int palin(string s)
{
	int left=0;
	int right=s.length()-1;
	int c=0;
	while(left<right)
	{
	  if(s[left]!=s[right])
	  c++;
	  
	  left++;
	  right--;
	}
	return c;
}

int main()
{
	int t,n,k,count;
	string s;
	cin>>t;
	while(t--)
	{
	   cin>>n>>k;
	   cin>>s;
	   count=palin(s);
	   if(k>=count)
	   {
	       if(s.length()%2==1)
	       cout<<"YES"<<endl;
	       else if((k-count)%2==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	   }
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
