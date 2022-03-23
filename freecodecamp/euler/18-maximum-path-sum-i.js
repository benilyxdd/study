function maximumPathSumI(triangle) {
	let n = triangle.length;
	const dp = new Array(n);
	for (let i = 0; i < n; i++) {
		dp[i] = new Array(n);
	}
	for (let i = 0; i < n; i++) {
		dp[n - 1][i] = triangle[n - 1][i];
	}
	for (let i = n - 2; i >= 0; i--) {
		for (let j = 0; j <= i; j++) {
			dp[i][j] =
				Math.max(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
		}
	}
	return dp[0][0];
}

const testTriangle = [
	[3, 0, 0, 0],
	[7, 4, 0, 0],
	[2, 4, 6, 0],
	[8, 5, 9, 3],
];

maximumPathSumI(testTriangle);
