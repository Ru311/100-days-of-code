/*Given an array Arr of N positive integers and a number K where K is used
 as a threshold value to divide each element of the array into sum of different
  numbers. Find the sum of count of the numbers in which array elements are divided.*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int totalCount(int arr[], int n, int k) {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%k==0)
            sum=sum+(arr[i]/k);
            else
            sum=sum+(arr[i]/k)+1;
        }
        return sum;
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
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
