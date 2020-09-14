/* Given a array a[] of non-negative integers. 
Count the number of pairs (i, j) in the array such that a[i] + a[j] < a[i]*a[j]. */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    int CountPairs (int a[], int n)
    {
        int count=0,two=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==2)
            two++;
            if(a[i]!=0 && a[i]!=1)
            count++;
        }
        int x=(count*(count-1)/2)-(two*(two-1)/2);
        return x;
        //code here.
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  Solution ob;
	  cout <<ob.CountPairs(arr, n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
