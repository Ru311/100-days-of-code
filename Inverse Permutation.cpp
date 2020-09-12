/* Given an array A of size n of integers in the range from 1 to n, 
we need to find the inverse permutation of that array. */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n; i++)
        {
            int k=a[i];
            b[k-1]=i+1;
        }
        for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
