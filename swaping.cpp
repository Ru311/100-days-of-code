/*Given an array A of N positive integers. 
The task is to swap every ith element of the array with (i+2)th element.*/


// { Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;

// Function prototype
void swapElements(int[], int);


 // } Driver Code Ends


//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
void swapElements(int arr[], int sizeof_array){
    int n=sizeof_array;
    for(int i=0; i<n-2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[i+2];
        arr[i+2]=temp;
    }
    // Your code here
}

// { Driver Code Starts.

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        
        // calling function to swap the array swap elements
	    swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends
