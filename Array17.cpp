// Function to reverse the array in groups

// ONLY FUNCTION

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    int i;

    for( i=0; i<n-k; i+=k)
    {
       reverse(mv.begin() + i, mv.begin() + i + k  ); 
    }
    if(i!=n-k-1)
     reverse(mv.begin() + i, mv.begin() + n );

    return mv;
    // your code here
     
}


