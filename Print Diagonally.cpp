class solution{
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		   for(int i=0; i<N; i++){
		       int row=0, col=i;
		       while(col>=0){
		           ans.push_back(A[row][col]);
		           row++;
		           col--;
		       }
		   }
		   for(int j=1; j<N; j++){
		       int col=N-1, row=j;
		       while(row<N){
		           ans.push_back(A[row][col]);
		           row++;
		           col--;
		       }
		   }
		
		return ans;
	}
};