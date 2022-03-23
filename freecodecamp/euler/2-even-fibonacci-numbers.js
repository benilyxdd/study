function fiboEvenSum(n) {
	let ans = 0;
	let a = 1,
		b = 2;
	while (b <= n) {
		if (b % 2 === 0) {
			ans += b;
		}
		let c = a + b;
		(a = b), (b = c);
	}
	return ans;
}
