function rangeOfNumbers(startNum, endNum) {
    if (startNum === endNum) {
        return [];
    }
    var ar = rangeOfNumbers(startNum + 1, endNum);
    ar.push(startNum);
    return ar;
};

var x = rangeOfNumbers(1, 10);
for (var i = 0; i < x.length; i++) {
    console.log(x[i]);
}