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
        
            //console.log(`stdout: ${stdout}`);            
            //console.log(`stderr: ${stderr}`);  
                     
            if(stderr.match("syntax error")){
                nr++;
                array.push(files[i]);
            }
            console.log("number of files with syntax error: "+nr);
            for(var k=0; k<array.length;k++){
                console.log( array[k]);
                if(k>10)
                    break;
            }
            parseFile(i+1);
            return;
        }

        //console.log(`stdout: ${stdout}`);
        //console.log(`stderr: ${stderr}`);

        

    
        parseFile(i+1);
    });
}