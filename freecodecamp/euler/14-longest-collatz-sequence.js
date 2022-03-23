function longestCollatzSequence(limit) {
	let mx = 0,
		ans = -1;
	for (let i = 1; i <= limit; i++) {
		let cnt = 0;
		let temp = i;
		while (temp != 1) {
			cnt++;
			if (temp % 2 === 0) {
				temp /= 2;
			} else {
				temp = temp * 3 + 1;
			}
		}
		if (cnt >= mx) {
			mx = cnt;
			ans = i;
		}
	}
	return ans;
}

longestCollatzSequence(14);
