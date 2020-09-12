/*Given an array of even size, task is to find minimum value that 
can be added to an element so that array become balanced. An array 
is balanced if the sum of the left half of the array elements is 
equal to the sum of right half.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin>>t; 
    for(int i; i<t; i++)
    {
        int n,x,sum1=0,sum2=0; 
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
         for(int i=0; i<n/2; i++)
        sum1=sum1+a[i];
         for(int i=n/2; i<n; i++)
        sum2=sum2+a[i];
        if(sum1>sum2)
        x=sum1-sum2;
        else
        x=sum2-sum1;
        cout<<x<<endl;
    }
	//code
	return 0;
}
