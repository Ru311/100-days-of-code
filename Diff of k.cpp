/*Given an array Arr of N positive integers. 
Find the number of pairs of integers whose difference is equal to a given number K. */


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	
	/* Returns count of pairs with difference k in arr[] of size n. */
	int countPairsWithDiffK(int a[], int n, int k) {
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	       {
	            if(abs(a[i]-a[j])==k)
	            count++;
	       }
	    }
	    return count;
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
