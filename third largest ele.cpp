/*Given an array of distinct elements. Find the third largest element in it. */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int thirdLargest(int a[],int n);
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<thirdLargest(a,n)<<endl;
    }
}   // } Driver Code Ends



int thirdLargest(int a[], int n)
{
    sort(a,a+n);
    if(n<3)
    return -1;
    else
    return a[n-3];
     //Your code here
}

