/*Given an array of size N consisting of only 0's and 1's. The array is 
sorted in such a manner that all the 1's are placed first and then they 
are followed by all the 0's. Find the count of all the 0's.
// { Driver Code Starts*/
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int countZeroes(int a[], int n) {
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            return (n-i);
        }
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
