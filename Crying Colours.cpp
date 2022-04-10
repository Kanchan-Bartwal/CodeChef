#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	int r1,b1,g1;
	int r2,b2,g2;
	int r3,b3,g3;
	while(t--)
	{
	    cin>>n;
	    cin>>r1>>b1>>g1;
	    cin>>r2>>b2>>g2;
	    cin>>r3>>b3>>g3;
	    
	    int sumUP=b1+g1+g2;
	    int sumDO=r2+r3+b3;
	    
	    if(sumUP>sumDO)
	    cout<<sumUP<<endl;
	    else
	    cout<<sumDO<<endl;
	}
	return 0;
}
