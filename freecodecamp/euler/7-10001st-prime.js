function nthPrime(n) {
	let ok = Array(200000).fill(true);
	ok[0] = ok[1] = false;
	for (let i = 2; i * i < 200000; i++) {
		if (ok[i]) {
			for (let j = i * i; j < 200000; j += i) {
				ok[j] = false;
			}
		}
	}
	const prime = [];
	for (let i = 0; i < 200000; i++) {
		if (ok[i]) {
			prime.push(i);
		}
	}
	return prime[n - 1];
}

nthPrime(10001);
