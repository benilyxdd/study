function multiplesOf3and5(number) {
	let ans = 0;
	for (let i = 3; i < number; i += 3) {
		ans += i;
	}
	for (let i = 5; i < number; i += 5) {
		if (i % 3 !== 0) {
			ans += i;
		}
	}
	return ans;
}

multiplesOf3and5(1000);
