int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size();
    int max_sum=A[0];
    int current_sum=A[0];
    for(int i=1;i<n;i++){
        current_sum=max(A[i],current_sum+A[i]);
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;
}
