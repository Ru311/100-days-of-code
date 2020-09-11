/*Given an unsorted array Arr of length N. 
Your task is to find the maximum difference between the successive elements in its sorted form.
Return 0 if the array contains less than 2 elements.*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	int maxSortedAdjacentDiff(int* arr, int n) {
	    if(n<2)
	    return 0;
	    int max=abs(arr[0]-arr[1]);
	    for(int i=1; i<n-1; i++)
	    {
	        int c=abs(arr[i]-arr[i+1]);
	        if(c>max)
	        max=c;
	    }
	    return max;
	    // code here
	}
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxSortedAdjacentDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
