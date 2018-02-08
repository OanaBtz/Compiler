var fs = require("fs");
var iconv = require("iconv-lite");

var files = fs.readdirSync("./LTD");

const { exec } = require('child_process');
var min = 100000000;
var max = -1;
var nr = 0;
var fileLines = "";
var array = [];

parseFile(0);

function parseFile(i)
{
    if(i>files.length-1){
        return;
    }
    console.log("Processing file: " + files[i]);
    var data = fs.readFileSync("./LTD/"+files[i], "binary");
    data = iconv.decode(data, "iso-8859-1");
    

    console.log("Trying to parse "+ files[i]);

    
    exec('./compiler <'+'LTD/'+files[i], (err, stdout, stderr) => {
        
        
        if (err) {
            
            console.log("I am here");
            if(stdout.match("Missing OFF node")){
                nr++;
                if(stdout.match("ERROR: BOX")){
                    fs.appendFile('LTD/'+files[i], '.bx off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: AREA")){
                    fs.appendFile('LTD/'+files[i], '.ar off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: KP")){
                    fs.appendFile('LTD/'+files[i], '.kp off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: SU")){
                    fs.appendFile('LTD/'+files[i], '.su off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: CE")){
                    fs.appendFile('LTD/'+files[i], '.ce off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: RH")){
                    fs.appendFile('LTD/'+files[i], '.rh off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: VR")){
                    fs.appendFile('LTD/'+files[i], '.vr off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: DM")){
                    fs.appendFile('LTD/'+files[i], '.dm off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
                if(stdout.match("ERROR: US")){
                    fs.appendFile('LTD/'+files[i], '.us off\n', function (err) {
                        if (err) 
                            throw err;
                        console.log('Saved!');
                    });
                }
    
            }
    
            console.log("files with missing off nodes: "+nr);
            //console.log(`stdout: ${stdout}`);            
            //console.log(`stderr: ${stderr}`);
            
            parseFile(i+1);
            return;
        }

        //console.log(`stdout: ${stdout}`);
        //console.log(`stderr: ${stderr}`);

        var message = `${stdout}`;
        
        if(stdout.match("Missing OFF node")){
            nr++;
            if(stdout.match("ERROR: BOX")){
                fs.appendFile('LTD/'+files[i], '.bx off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: AREA")){
                fs.appendFile('LTD/'+files[i], '.ar off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: KP")){
                fs.appendFile('LTD/'+files[i], '.kp off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: SU")){
                fs.appendFile('LTD/'+files[i], '.su off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: CE")){
                fs.appendFile('LTD/'+files[i], '.ce off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: RH")){
                fs.appendFile('LTD/'+files[i], '.rh off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: VR")){
                fs.appendFile('LTD/'+files[i], '.vr off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: DM")){
                fs.appendFile('LTD/'+files[i], '.dm off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }
            if(stdout.match("ERROR: US")){
                fs.appendFile('LTD/'+files[i], '.us off\n', function (err) {
                    if (err) 
                        throw err;
                    console.log('Saved!');
                });
            }

        }

        console.log("files with missing off nodes: "+nr);
    
        parseFile(i+1);
    });
}