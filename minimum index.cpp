/*You are given an array A, of N elements. 
Find minimum index based distance between two elements of the array, x and y. */


// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}
// } Driver Code Ends



int minDist(int a[], int n, int x, int y) {
    int m, k, g, diff=-1;
    vector<int>dist;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x || a[i]==y)
        {
            m=i;
            if(a[i]==x)
            g=y;
            else
            g=x;
     
            for(int j=i+1; j<n; j++)
                {
                   if(a[j]==g)
                    {
                       k=j;
                       dist.push_back(k-m);
                       break;
                    }
                    else if (j==n-1 && dist.size()==0)
                    return -1;
                }
        }
        else if (i==n-1 && dist.size()==0)
        return -1;
    }
    
    
    return *min_element (dist.begin(), dist.end());
    // code here
}
