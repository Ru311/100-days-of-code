/*You start with an array A of size N. Also, A[i] = 0 for i = 1 to N. 
You will be given K positive integers. Let j be one of these integers, 
you have to add 1 to all A[i], for i >= j. Your task is to print the
array A after all these K updates are done.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, k;
        cin>>n>>k;
        int a[n]={0}, b[k];
        for(int i=0; i<k; i++)
        {
            cin>>b[i];
            for(int j=b[i]-1; j<n; j++)
            a[j]++;
        }
        for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
