function powerDigitSum(exponent) {
	const x = BigInt(Math.pow(2, exponent));
	const d = x.toString().split("");
	let ans = d.reduce((sum, num) => sum + parseInt(num), 0);
	return ans;
}

powerDigitSum(1000);
