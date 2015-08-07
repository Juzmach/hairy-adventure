var sys = require('sys')
var exec = require('child_process').exec;
var readlineSync = require('readline-sync');

console.log('\033[2J');
console.log('Initializing M.O.O.N.A - ');
console.log('Missile Operated Oppression Neutralization Arsenal.');
console.log('...');
console.log('Please hold...');
console.log('...');

function print(str) {
	return function() {
		console.log(str);
	}
}
setTimeout(print('...'), 500);
setTimeout(print('...'), 1000);
setTimeout(print('...'), 1500);
setTimeout(cont, 1750);


var cmd = 'test.sh';
//var cmd = 'stella -fullscreen 1 /defense/missilecommand.A26';

function cont() {
	var code = readlineSync.question('Insert launch code: ');
	//check launch code

	setTimeout(print('...'), 500);
	setTimeout(cont2, 1000);
}

function cont2() {
	console.log('Launch code accepted. System start-up initiated.');
	
	function puts(error, stdout, stderr) { console.log(stdout) }
	exec(cmd, puts);
}



