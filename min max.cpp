/*Given an array A of size N of integers. 
Your task is to find the minimum and maximum elements in the array.*/

#include <iostream>
using namespace std;

int main() { int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,min,max;
        cin>>n;
        int a[n];
        cin>>a[0];
        min=a[0];
        max=a[0];
        for(int i=1; i<n; i++)
        {
             cin>>a[i];
             if(a[i]<=min)
             min=a[i];
             if(a[i]>=max)
             max=a[i];
        }
        cout<<min<<" "<<max<<endl;
    }
	//code
	return 0;
}
