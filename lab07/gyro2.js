var b = require('bonescript');
var port = '/dev/i2c-2'; 
var gy521 = 0x68;
var ms = 2000; 
b.i2cOpen(port, gy521);
b.i2cWriteBytes(port, 0x6b, [0]); 
setInterval(readData, ms)
function readData() {

b.i2cReadBytes(port, 0x3b, 14, displayData);
}

function displayData(x) {
    var gy;
    if (x.event === 'return') {
        gy = {
           
            temp: {
                x: (((x.return[6] << 8 | x.return[7]) << 16) >> 16)

            }
                    }
    };
    console.log(gy);
}
