//Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, d;
        cin>>n>>d;
        int arr[n], arr1[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<(n-d); i++)
        {
            arr1[i]=arr[i+d];
        }
        for(int i=0; i<(d); i++)
        {
            arr1[n-d+i]=arr[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
