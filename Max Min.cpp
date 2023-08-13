//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int maxa = INT_MIN;
    	int mini = INT_MAX;
    	
    	for(int i=0; i<N; i++)
    	{
    	    if(A[i]>=maxa){
    	        maxa = A[i];
    	    } 
    	    if(A[i]<=mini){
    	        mini = A[i];
    	    }
    	}
    	return maxa+mini;
    }

};
