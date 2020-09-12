/*Given an array of n elements such that every element of array is
 an integer in the range 1 to n, find the sum of all the distinct elements of the array.*/
 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        int b[n+1]={0};
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            int k=a[i];
            b[k]=1;
        }
        for(int i=0; i<=n; i++)
        {
            if(b[i]==1)
            {
                sum=sum+i;
                
            }
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}
