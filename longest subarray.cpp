/*Given an array, return length of the longest subarray of non- negative integers.

Note: Subarray here means a continuous part of the array.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, num1=0, num2=0, max=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0 )
           {
               num2=i;
               if(num2-num1>max && num1==0 && a[0]>=0)
               max=num2-num1;
               else if(num2-num1>max)
               max=num2-num1-1;
               num1=num2;
           }
           else if(i==n-1 && num1==0 && a[0]>=0)
           {
               num2=i;
               if(num2-num1>max)
               max=num2-num1+1;
               num1=num2;
           }
           else if(i==n-1)
           {
               num2=i;
               if(num2-num1>max)
               max=num2-num1;
               num1=num2;
           }
            
        }
        cout<<max<<endl;
    }
	//code
	return 0;
}
