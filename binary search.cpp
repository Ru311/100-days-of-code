/*Given a sorted array of integers and a key to be searched in the array. Print the position 
of the key in the array, if present. If it's not present in the array, report it. */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[],int left,int right,int k);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}
// } Driver Code Ends


/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
    int flag=-1;
    for(int i=left; i<=right; i++)
    {
        if(A[i]==k)
        {
            flag=i;
            break;
        }
    }
    return flag;
}
