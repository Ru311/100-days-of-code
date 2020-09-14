//Given a sorted array of size N. Count the number of distinct absolute values present in the array.

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int distinctCount(int arr[], int n) {
        vector<int>b;
        for(int i=0; i<n; i++)
        arr[i]=abs(arr[i]);
        sort(arr, arr+n);
        b.push_back(arr[0]);
        for(int i=1; i<n; i++)
        if(arr[i]!=arr[i-1])
        b.push_back(arr[i]);
        return b.size();
        // code here
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
        auto ans = ob.distinctCount(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
