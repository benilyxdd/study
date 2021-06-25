function palindrome(str) {
	let temp = str.toLowerCase().replace(/\W|-|_|\s/g, "");
	console.log(temp);
	let n = temp.length;
	for (let i = 0; i < n / 2; i++) {
		if (temp[i] !== temp[n - i - 1]) {
			return false;
		}
	}
	return true;
}
