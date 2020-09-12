//  Given a sorted array A of size N. The function remove_duplicate takes two arguments . The first argument is the 
//sorted array A[ ] and the second argument is 'N' the size of the array and returns the size of the new converted array 
//A[ ] with no duplicate element.

// THIS IS ONLY FUNCTION NOTE THE FULL CODE

int remove_duplicate(int a[],int N)
{
    vector<int>b;
    int flag=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            flag=0;
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        b.push_back(a[i]);
    }
       
    copy(b.begin(), b.end(), a);

  return b.size();

}
