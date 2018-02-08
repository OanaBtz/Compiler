var fs = require("fs");
var iconv = require("iconv-lite");

var files = fs.readdirSync("./LTD");

const { exec } = require('child_process');

var array = [];
var nr = 0;
var nr2 = 0;

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
            }else if(!stdout.match("Template generated successfully!")){
                nr2++;
                array.push(files[i]);
                console.log(stdout);         
                // console.log( array);

            }
            console.log("number of files with syntax error: "+nr);
            console.log("number of files with different errors: "+nr2);
            // for(var k=0; k<array.length;k++){
            //     console.log( array[k]);
            //     if(k>10)
            //         break;
            // }
            parseFile(i+1);
            return;
        }

        //console.log(`stdout: ${stdout}`);
        //console.log(`stderr: ${stderr}`);
        if(stderr.match("syntax error")){
            nr++;
        }else if(!stdout.match("Template generated successfully!")){
            nr2++;
            array.push(files[i]);
            console.log(stdout);
            // console.log( array);
        }
        console.log("number of files with syntax error: "+nr);
        console.log("number of files with different errors: "+nr2);
        // for(var k=0; k<array.length;k++){
        //     if(k>10)
        //         break;
        // }
        parseFile(i+1);
        
    });
}