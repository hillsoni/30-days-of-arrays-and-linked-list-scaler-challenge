vector<int> Solution::getRow(int A) {
    int prev=1;
    vector<int> v;
    v.push_back(prev);
    for(int i=1;i<=A;i++){
        int curr=(prev*(A-i+1))/i;
        v.push_back(curr);
        prev=curr;
    }
    return v;
}
