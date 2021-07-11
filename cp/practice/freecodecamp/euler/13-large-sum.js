function largeSum(arr) {
	let ans = arr.reduce((ac, item) => ac + Number(item), 0);
	let temp = ans.toString().split("e")[0];
	ans = 1e9 * temp.slice(0, 11);
	return ans;
}

// Only change code above this line

const testNums = [
	"37107287533902102798797998220837590246510135740250",
	"46376937677490009712648124896970078050417018260538",
];

largeSum(testNums);
