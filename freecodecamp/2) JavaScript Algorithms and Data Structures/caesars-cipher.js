function rot13(str) {
	let temp = str.split("").map((text) => {
		let x = text.charCodeAt();
		if (x >= 65 && x <= 90) {
			return String.fromCharCode(((x - 65 + 13) % 26) + 65);
		} else {
			return text;
		}
	});
	return temp.join("");
}
