//	 Check	whether	n	is	present	in	an	array	of	size	m	or	not.	
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, m, flag=0;
	cin>>n>>m;
	int arr[m];
	for(int i=0; i<m; i++)
	{
		cin>>arr[i];
		if(arr[i]==n)
		flag=1;
	}
	if(flag==1)
	cout<<"true";
	else
	cout<<"false";
}
