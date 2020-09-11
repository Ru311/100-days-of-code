// 	 Find	the	range	of	the	array.	Range	means	the	difference	between	the	
//   maximum	and	minimum	element	in	the	array.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, max=0, min=0;
	cin>>n;
	int arr[n];
	cin>>arr[0];
	min=arr[0];
	for(int i=1; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]>=max)
     	max=arr[i];
		
		if(arr[i]<=min)
		min=arr[i];
	}
	cout<<(max-min);
	
}

