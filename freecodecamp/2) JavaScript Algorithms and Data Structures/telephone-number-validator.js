function telephoneCheck(str) {
	return (
		str.match(/^(1\s?)?(\(\d{3}\)|\d{3})[\s\-]?\d{3}[\s\-]?\d{4}$/) !== null
	);
}
