/* Given an array of N elements, find the minimum number of insertions
 to convert the given array into a co-prime array adjacent pair-wise. */


// { Driver Code Starts
// CPP program for minimum insertions to
// make a Co-prime Array.
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	int countCoPrime(int a[], int n)
	{
	    int count=0;
	    for(int i=1; i<n; i++)
	    {
	        if(__gcd(a[i],a[i-1])!=1)
	        count++;
	    }
	    return count;
	    // Complete the function
	}

};

// { Driver Code Starts.

// Driver Function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.countCoPrime(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
