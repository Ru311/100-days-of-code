/*Given an array A[] representing the size of candles which reduces 1 unit in a day. 
The room is illuminated using given N candles, where N is the size of array A, the 
task is to find the maximum number of days the room is without darkness.*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	

	public:
	int  maxDays(int a[],int n)
	{
	    int max=a[0];
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]>max)
	        max=a[i];
	    }
	    return max;
	    // Your code goes here
	}
	 

};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       

        Solution ob;
        cout <<  ob.maxDays(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
