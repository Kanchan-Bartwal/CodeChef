
#include <iostream>

using namespace std;

int main()
{
    //t is for number of test cases
    int t,n;
    //n is for length of string
    cin>>t;
    //loop for taking up all the test cases
    string str;
    int c;
    while(t--)
    {
        c=0;
        cin>>n;
        cin>>str;
        
        for(int i=0;i<n;i++)
        {
            //our logic to count 1 for repetition
            if(i!=n-1 && str[i]==str[i+1])
                i++;
                
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
