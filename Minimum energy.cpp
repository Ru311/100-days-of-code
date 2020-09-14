/*Given an array containing positive and negative numbers. 
The array represents checkpoints from one end to other end of street.
 Positive and negative values represent amount of energy at that checkpoint. 
 Positive numbers increase the energy and negative numbers decrease. 
 Find the minimum initial energy required to cross the street such that Energy 
 level never becomes 0 or less than 0.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=-1,sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<0)
            {
                flag=i;
            break;
            }
        }
        if(flag>=0)
        {
            for(int i=0; i<=flag; i++)
            sum=sum+a[i];
        }
        if(sum<0)
        cout<<0-sum+1<<endl;
        else
        cout<<"1"<<endl;
    }
	//code
	return 0;
}
