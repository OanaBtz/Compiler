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
    
    console.log("Processing file: " + files[i]);
    var data = fs.readFileSync("./LTD/"+files[i], "binary");
    data = iconv.decode(data, "iso-8859-1");
    

    console.log("Trying to parse "+ files[i]);

    
    exec('./compiler <'+'LTD/'+files[i], (err, stdout, stderr) => {
        
        console.log("I am here");
        
        if (err) {
        
            console.log(`stdout: ${stdout}`);            
            console.log(`stderr: ${stderr}`);
            
            fileLines = data.split("\n");
            nr = nr+ fileLines.length-1;
            
            
            console.log("the nr of lines is: "+nr);
            console.log(data.length-1);

            if(fileLines.length-1 < min && fileLines.length-1 >0){
                min = fileLines.length-1;
            }
            if(fileLines.length-1 > max){
        
                max = fileLines.length-1;
            }
            
            console.log("the min is:  "+min+"  the max is:  "+max);
            parseFile(i+1);
            return;
        }

        console.log(`stdout: ${stdout}`);
        console.log(`stderr: ${stderr}`);
        
        fileLines = data.split("\n");
        nr = nr+ fileLines.length-1;

        
        
        console.log("the nr of lines is: "+nr);
        console.log(fileLines.length);
        console.log(fileLines);
        

        if(fileLines.length-1 < min && fileLines.length-1 >0){
            min = fileLines.length-1;
        }
        if(fileLines.length-1 > max){
    
            max = fileLines.length-1;
        }
        
        console.log(fileLines.length-1);
        console.log("the min is:  "+min+"  the max is:  "+max);
        parseFile(i+1);
    });
}

