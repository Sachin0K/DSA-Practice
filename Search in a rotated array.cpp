class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        for(int i=l; i<=h; i++){
            if(A[i]==key)
            return i;
        }
        return -1;
    }
};
