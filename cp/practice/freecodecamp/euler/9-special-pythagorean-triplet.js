function specialPythagoreanTriplet(n) {
	for (let i = 1; i <= n; i++) {
		for (let j = i + 1; j <= n; j++) {
			let k = n - i - j;
			const ar = [i, j, k];
			ar.sort((a, b) => a - b);
			if (ar[0] < 0) {
				continue;
			}
			if (ar[0] ** 2 + ar[1] ** 2 === ar[2] ** 2) {
				return ar[0] * ar[1] * ar[2];
			}
		}
	}
	return -1;
}

specialPythagoreanTriplet(1000);
