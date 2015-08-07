function recurse(sndLast, last, depth) {
	var dis = sndLast + last;
	if(depth === 1) {
		return dis;
	}
	return recurse(last, dis , depth - 1);
}

function getNthFibo(idx) {
	return recurse(1,1,idx-2);
}

console.log(getNthFibo(7));

for(var i = 30; i < 40; i++) {
	console.log('' + i + 'th fibo num: ' + getNthFibo(i));
}
