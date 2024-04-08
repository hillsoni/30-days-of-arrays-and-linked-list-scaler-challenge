void reverse(vector<vector<int>> &ans,int row){
    int start=0;
    int end=ans[row].size()-1;
    while(start<end){
        swap(ans[row][start],ans[row][end]);
        start++;
        end--;
    }
}

void Solution::solve(vector<vector<int> > &A) {
    int i;
    for(i=0;i<A.size();i++){
        for(int j=i+1;j<A[i].size();j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<A.size();i++){
        reverse(A,i);
    }
    
    
}
