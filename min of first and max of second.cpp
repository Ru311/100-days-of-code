/*Given two arrays of A and B respectively of sizes N1 and N2, 
the task is to calculate the product of maximum element of first array 
and minimum element of second array.*/

#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n1, n2;
        
        cin>>n1;
        int a[n1];
        cin>>a[0];
        int max=a[0];
        for(int i=1; i<n1; i++)
        {
            cin>>a[i];
              if(a[i]>=max)
             max=a[i];
        }
        
        cin>>n2;
        int b[n2];
        cin>>b[0];
       int  min=b[0];
        for(int i=1; i<n2; i++)
        {
            cin>>b[i];
            if(b[i]<=min)
             min=b[i];
        }
        cout<<min*max<<endl;
        
    }
	//code
	return 0;
}
