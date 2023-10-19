# Python3 program for Painting Fence Algorithm 
# optimised version

# Returns count of ways to color k posts 
def countWays(n, k):
	
	dp = [0] * (n + 1)
	total = k 
	mod = 1000000007
	
	dp[1] = k
	dp[2] = k * k 
	
	for i in range(3,n+1):
		dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2])) % mod
		
	return dp[n]

# Driver code 
n = 3
k = 2
print(countWays(n, k))

# This code is contributed by shubhamsingh10
