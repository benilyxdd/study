function convertToRoman(num) {
	let d = String(+num).split("");
	let key = [
		"",
		"C",
		"CC",
		"CCC",
		"CD",
		"D",
		"DC",
		"DCC",
		"DCCC",
		"CM",
		"",
		"X",
		"XX",
		"XXX",
		"XL",
		"L",
		"LX",
		"LXX",
		"LXXX",
		"XC",
		"",
		"I",
		"II",
		"III",
		"IV",
		"V",
		"VI",
		"VII",
		"VIII",
		"IX",
	];
	let ans = "";
	let i = 3;
	while (i--) {
		ans = (key[+d.pop() + i * 10] || "") + ans;
	}
	return Array(+d.join("") + 1).join("M") + ans;
}
