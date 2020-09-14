/*Given an array arr[] of size N, the task is to add the minimum 
number(should be greater than 0) to the array so that the sum of the array becomes even */

#include <bits/stdc++.h>
using namespace std;

class Solution{


	public:
	int minNum(long long int a[],int n)
	{
	    int sum=0;
	    for(int i=0; i<n; i++)
	    sum=sum+a[i];
	    if(sum%2==0)
	    return 2;
	    else
	    return 1;
	  
	}		 

};

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        
        
      
        Solution ob;
		cout << ob.minNum(a, n);
        
	    cout << "\n";
	     
    }
    return 0;
}








  // } Driver Code Ends
