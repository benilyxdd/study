function largestPrimeFactor(number) {
	const se = new Set();
	for (let i = 2; i * i <= number; i++) {
		if (number % i === 0) {
			se.add(i);
			se.add(number / i);
		}
	}
	const ls = [...se];
	ls.sort((a, b) => b - a);
	for (let ele of ls) {
		let ok = true;
		for (let i = 2; i * i <= ele; i++) {
			if (ele % i === 0) {
				ok = false;
				break;
			}
		}
		if (ok) {
			return ele;
		}
	}
	return number;
}

largestPrimeFactor(1000);
