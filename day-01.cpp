int Solution::solve(vector<int> &A) {
    int a=0,b=0;
    for(int i=0;i<A.size();i++){
        if(b<A[i]){
            a=b;
            b=A[i];
        }
        else if(a<A[i]&&A[i]!=b){
            a=A[i];
        }
    }
    return a;
}
