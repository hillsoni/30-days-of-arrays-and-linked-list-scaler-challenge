class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    def repeatedNumber(self, A):
        n=len(A)
        temp=[0]*n
        renum=-1
        misnum=-1
        val=[]
        for i in range(n):
            temp[A[i]-1]+=1
            if temp[A[i]-1]>1:
                renum=A[i]
                val.append(renum)
        for i in range(n):
            if temp[i]==0:
                misnum=i+1
                val.append(misnum)
                break
        return val
                
