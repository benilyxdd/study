function latticePaths(gridSize) {
	const dp = new Array(gridSize + 1).fill(new Array(gridSize + 1));
	for (let i = 0; i <= gridSize; i++) {
		dp[0][i] = 1;
		dp[i][0] = 1;
	}
	for (let i = 1; i <= gridSize; i++) {
		for (let j = 1; j <= gridSize; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[gridSize][gridSize];
}

latticePaths(4);
