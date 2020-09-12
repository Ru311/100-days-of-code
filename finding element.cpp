/*Given an integer array Arr[] and an element x. 
The task is to find if the given element is present in array or not.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, flag=-1, x;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
          cin>>a[i];
        cin>>x;
        for(int i=0; i<n; i++)
          {
              if(a[i]==x)
              {
                flag=i;
                break;
              }
          }
       cout<<flag<<endl;
    
    }
	//code
	return 0;
}
