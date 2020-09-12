/*Given an array Arr of N positive integers. Push all the zero’s of
the given array to the end of the array.while maitaining the order 
of non-zero elements.*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	void pushZerosToEnd(int a[], int n) {
	    
	    int j=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]!=0)
	        {
	            a[j]=a[i];
	            j++;
	        }    
	    }
	     for(int i=j; i<n; i++)
	     a[i]=0;	  
	   
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
