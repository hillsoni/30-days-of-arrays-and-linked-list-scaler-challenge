int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size(),ans=0;
    for(int i=1;i<n-1;i++){
        if(A[i]!=A[0] && (A[i] != A[n-1]))
        ans++;
    }
    return ans;
}
