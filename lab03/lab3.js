var b = require('bonescript');
b.analogRead('P9_40', printAIN1);
var led='P9_13';
b.pinMode(led,b.OUTPUT);
setInterval(printAIN1,100);

function printAIN1(x) {
    console.log('x.value = ' + x.value);
    console.log('x.err = ' + x.err);
    b.analogWrite(led,x.value);
}  