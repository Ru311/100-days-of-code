/*Given an unsorted array arr of size N, rearrange the elements of array such that number at the odd index is greater than
the number at the previous even index. The task is to complete the function formatArray() which will return formatted array.*/

// ONLY FUNCTION

vector<int> formatArray(vector<int> a,int n)
{
    if(n%2==0){
        for(int i=0; i<n; i=i+2)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
  
    }
    }
    else
    {
        for(int i=0; i<n-1; i=i+2)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
  
    }
    }
    
    return a;
//add code here.	
}
