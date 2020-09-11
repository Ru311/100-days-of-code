// 	 Find	the	Kth	largest	and	Kth	smallest	number	in	an	array.	
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int k, n;
	cin>>k>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Largest"<<a[k-1]<<endl;
	cout<<"Smalest"<<a[n-k];
}
