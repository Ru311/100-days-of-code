/*You are given an array Arr of size N. Find the sum of distinct 
elements in an array.*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	// Find the sum of all non-repeated elements
	// in an array
	int findSum(int arr[], int n) {
	    int sum = 0;

	    // Hash to store all element of array
	    unordered_set<int> s;
	    for (int i = 0; i < n; i++) {
	        if (s.find(arr[i]) == s.end()) {
	            sum += arr[i];
	            s.insert(arr[i]);
	        }
	    }

	    return sum;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
