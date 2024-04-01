class Solution:
    def solve(self, A):
        a, b = 0, 0
        for num in A:
            if b < num:
                a, b = b, num
            elif a < num and num != b:
                a = num
        return a

# Create an instance of the Solution class
solution = Solution()

# Take input from the user for the array A
A = list(map(int, input("Enter the array elements separated by space: ").split()))

# Call the solve method with the input array
result = solution.solve(A)
print("The second largest element in the array is:", result)
