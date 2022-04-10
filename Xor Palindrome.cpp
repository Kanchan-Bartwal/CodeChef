#include <iostream>

using namespace std;

// preprocess macro for the result
#define K if(n%2==0){if(k1==k2)cout<<"YES\n";else if(k1%2==0&&k2%2==0)cout<<"YES\n";else cout<<"NO\n";}else cout<<"YES"<<endl;

int main() 
{
    //variable for holding number of test cases
    int test_cases;
    //taking input of test cases
    cin>>test_cases;
    
    //variable to hold string
    string s;
    while(test_cases--)
    {
        int k1=0,k2=0,i,n;
        //taking input for length of string
        cin>>n;
        
        cin>>s;
        for(i=0;i<n;i++)
        {
            (s[i]=='0')?k1++:k2++;
        }
        K;
    }
    return 0;
}
