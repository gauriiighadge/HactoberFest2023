class GfG:
	dp = [[-1 for i in range(1002)] for j in range(1002)]

	# Returns the maximum coins that
	# can be collected from start to end
	def getMaxCoins(self, coins, start, end):
		# Base case: When start index is
		# greater than end index
		if start > end:
			return 0

		# If we have already computed the
		# solution for this sub-problem
		if self.dp[start][end] != -1:
			return self.dp[start][end]

		# Case 1: Choose the last coin,
		# then we can choose between the
		# first and second-last coins
		option1 = coins[end] + min(self.getMaxCoins(coins, start + 1, end - 1), self.getMaxCoins(coins, start, end - 2))

		# Case 2: Choose the first coin,
		# then we can choose between the
		# second and last coins
		option2 = coins[start] + min(self.getMaxCoins(coins, start + 2, end), self.getMaxCoins(coins, start + 1, end - 1))

		# Store the maximum coins that
		# can be collected from start
		# to end
		self.dp[start][end] = max(option1, option2)

		return self.dp[start][end]

	def maxCoins(self, coins, n):
		# Initialize the DP array with -1
		for i in range(1001):
			for j in range(1001):
				self.dp[i][j] = -1

		return self.getMaxCoins(coins, 0, n - 1)

# Driver code
if __name__ == '__main__':
	coins = [8, 15, 3, 7]
	n = len(coins)
	gfg = GfG()
	maxCoins = gfg.maxCoins(coins, n)

	# Function call
	print(maxCoins)
