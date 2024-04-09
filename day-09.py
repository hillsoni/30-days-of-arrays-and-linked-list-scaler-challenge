class Solution:
    # @param A : tuple of integers
    # @return an integer
    def trap(self, A):
        N=len(A)
        lm=N*[0]
        rm=N*[0]
        ans=0
        for i in range(N):
            if i==0:
                lm[i]=A[i]
                rm[N-1-i]=A[N-1-i]
            else:
                lm[i]=max(lm[i-1],A[i])
                rm[N-1-i]=max(rm[N-i],A[N-1-i])
        for i in range(N):
            ans+=(min(lm[i],rm[i])-A[i])
        return ans
