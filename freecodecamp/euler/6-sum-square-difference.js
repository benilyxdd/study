function sumSquareDifference(n) {
	let fir = 0,
		sec = 0;
	for (let i = 1; i <= n; i++) {
		fir += i;
		sec += i ** 2;
	}
	fir = fir ** 2;
	const ans = Math.abs(fir - sec);
	return ans;
}

sumSquareDifference(100);
