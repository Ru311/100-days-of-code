/*Given a sorted array having 10 elements which contains 6 different
 numbers in which only 1 number is repeated five times. Your task is
  to find the duplicate number using two comparisons only.*/
  
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a[10];
        for(int i=0; i<10; i++)
        cin>>a[i];
        if(a[4]==a[3])
        cout<<a[4];
        else if(a[5]==a[6])
        cout<<a[5];
        cout<<endl;
    }
	//code
	return 0;
}
