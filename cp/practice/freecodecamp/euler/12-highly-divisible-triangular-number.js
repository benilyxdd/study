function divisibleTriangleNumber(n) {
	let cnt = 0;
	for (let i = 1; i < 20000; i++) {
		cnt += i;
		const divisor = new Set();
		for (let j = 1; j * j <= cnt; j++) {
			if (cnt % j === 0) {
				divisor.add(j);
				divisor.add(cnt / j);
			}
		}
		if (divisor.size >= n) {
			console.log(cnt);
			return cnt;
		}
	}
	return -1;
}

divisibleTriangleNumber(500);
