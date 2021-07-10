function largestPalindromeProduct(n) {
	const ar = [];
	const mx = Math.pow(10, n) - 1;
	for (let i = 1; i <= mx; i++) {
		for (let j = 1; j <= mx; j++) {
			const number = i * j;
			const number_rev = [...String(number)].reverse().join("");
			if (number == number_rev) {
				ar.push(number);
			}
		}
	}
	return Math.max(...ar);
}

largestPalindromeProduct(3);
