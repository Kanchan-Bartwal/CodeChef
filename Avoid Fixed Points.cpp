#include <iostream>
using namespace std;
int main() {
    
    //test is a variable to take number of input test cases
    
    int test;
    
    //taking input using cin extraction operator
    
    cin>>test;
    
    //other variables that would be used during logic building and calculations
    
    int n,x,k;
    
    //here goes our while loop
    
    while(test--){
        
        //initializing k to 0 on each test case
        
        k=0;
        
        //input n ie the sizee of array
        
        cin>>n;
        
        //allocating an array of size n
        
        int a[n];
        
        //here goes initializing and calculation
        
        for(int i=0;i<n;i++){
            
            //input the elements of the array one by one
            
            cin>>a[i];
            
            x=1+k+i;
            (x==a[i]?k++:0);
        }
        //printing up the result
        cout<<k<<endl;
    }
	return 0;
}
