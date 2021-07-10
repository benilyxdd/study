const gcd = (a, b) => {
	if (b === 0) {
		return a;
	}
	return gcd(b, a % b);
};

function smallestMult(n) {
	let ans = 1;
	for (let i = 2; i <= n; i++) {
		ans = (ans * i) / gcd(ans, i);
	}
	return ans;
}

smallestMult(20);
