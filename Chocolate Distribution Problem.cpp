class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    int diff = 0;
    int ans = INT_MAX;
    for(int i=0; i+m-1<n; i++){
        diff = a[m-1+i]-a[i];
        ans = min(diff,ans);
    }
    return ans;
    }   
};
