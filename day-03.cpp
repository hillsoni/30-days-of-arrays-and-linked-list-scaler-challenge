int Solution::solve (vector<int> &A) {
  int cnt = 0; 
  int n A.size();
  for(int i=0;i<A.size();i++){
    if (A[i]%2!=0){
      cnt++;
      }
  }
  return min(cnt, n-cnt);
}
