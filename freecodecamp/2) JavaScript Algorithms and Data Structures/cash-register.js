function checkCashRegister(price, cash, cid) {
	for (let i = 0; i < cid.length; i++) {
		cid[i][1] = parseInt(cid[i][1] * 100);
	}
	let changes = parseInt((cash - price) * 100);
	let cidcpy = cid.reverse();
	let mp = {
		"ONE HUNDRED": 10000,
		TWENTY: 2000,
		TEN: 1000,
		FIVE: 500,
		ONE: 100,
		QUARTER: 25,
		DIME: 10,
		NICKEL: 5,
		PENNY: 1,
	};
	let obj = {
		status: undefined,
		change: [],
	};
	let total = 0;

	for (let i = 0; i < cidcpy.length; i++) {
		let mon = mp[cidcpy[i][0]];
		let ava = Math.round(cidcpy[i][1] / mon);
		let get = Math.floor(changes / mon);

		let mn = Math.min(ava, get);
		let all = mn * mon;
		total += all;
		changes -= all;
		obj.change.push([cidcpy[i][0], all / 100]);
	}

	if (changes > 0) {
		return { status: "INSUFFICIENT_FUNDS", change: [] };
	}

	let same = true;
	for (let i = 0; i < cid.length; i++) {
		if (obj.change[i][1] * 100 !== cid[i][1]) {
			same = false;
			break;
		}
	}

	if (same) {
		obj.status = "CLOSED";
		obj.change.reverse();
		return obj;
	}

	if (Math.round(changes) === 0) {
		obj.status = "OPEN";
		obj.change = obj.change.filter((ar) => ar[1] !== 0);
		return obj;
	}
	return obj;
}
