function largestPrimeFactor(number) {
	const ls = [];
	for (let i = 2; i * i <= number; i++) {
		if (number % i === 0) {
			ls.push(i);
			ls.push(number / i);
		}
	}
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
