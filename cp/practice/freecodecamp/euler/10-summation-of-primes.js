function primeSummation(n) {
	const ar = Array(n).fill(true);
	ar[0] = ar[1] = false;
	for (let i = 2; i * i < n; i++) {
		if (ar[i]) {
			for (let j = i * i; j < n; j += i) {
				ar[j] = false;
			}
		}
	}
	let ans = 0;
	for (let i = 0; i < n; i++) {
		if (ar[i]) {
			ans += i;
		}
	}
	return ans;
}

primeSummation(2000000);
