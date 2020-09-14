// Given an array Arr of N positive integers, find K largest elements from the array.  The output elements should be printed in decreasing order.
#include <bits/stdc++.h>

using namespace std;



//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n);
	    vector<int>b;
	    for(int i=n-1; i>=n-k; i--)
	    b.push_back(arr[i]);
	    return b;
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
