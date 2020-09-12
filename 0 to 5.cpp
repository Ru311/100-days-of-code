//You are given an integer N. You need to convert all zeroes of N to 5.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int ten=10,flag=0;
    while(n/ten!=0)
    {
        int x=n%ten;
        if(x-flag==0)
        x = 5*ten/10+flag;
        flag=x;
        n=(n/ten)*ten+x;
        ten=ten*10;
    
    }
    return n;
    // Your code here
}
