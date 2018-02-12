var fs = require("fs");
var iconv = require("iconv-lite");

var files = fs.readdirSync("./LTD");

const { exec } = require('child_process');

var workingTemplates = "";
var syntaxErrorTemplates = "";
var nr = 0;
var nr2 = 0;

parseFile(0);

function parseFile(i)
{
    if(i>files.length-1){
        console.log("number of files with syntax error: "+nr);
        console.log("number of files with different errors: "+nr2);
        fs.writeFileSync("SyntaxErrorReport.txt", "***SYNTAX ERRORS IN " + nr + " TEMPLATES:\n" + syntaxErrorTemplates + "\n***OTHER ERRORS IN " + nr2 + " TEMPLATES:\n" + workingTemplates);
        console.log("A report has been saved to: SyntaxErrorReport.txt")
        return;
    }
    console.log("Processing file: " + files[i]);
    var data = fs.readFileSync("./LTD/"+files[i], "binary");
    data = iconv.decode(data, "iso-8859-1");
    

    console.log("Trying to parse "+ files[i]);

    
    exec('./compiler <'+'LTD/'+files[i], (err, stdout, stderr) => {
        
        
        
        if (err) { 
                     
            if(stderr.match("syntax error")){
                nr++;
                syntaxErrorTemplates += files[i] + "\n";
            }else if(!stdout.match("Template generated successfully!")){
                nr2++;
                workingTemplates += files[i] + "\n";
            }
            parseFile(i+1);
            return;
        }

        if(stderr.match("syntax error")){
            nr++;
            syntaxErrorTemplates += files[i] + "\n";
            console.log( array);
        }else if(!stdout.match("Template generated successfully!")){
            nr2++;
            workingTemplates += files[i] + "\n";
        }
        parseFile(i+1);
        
    });
}
