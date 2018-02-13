var fs = require("fs");
var iconv = require("iconv-lite");

var data = fs.readFileSync("BECREL.csv", "utf-8");
var templateNameColumnIndex = 1;
var notFound = "";
var notFoundCount = 0;
var processed = 0;

data = data.split("\n");

for(let i = 1; i < data.length; i++)
{
    let line = data[i].split(";");

    if(line)
    {
        console.log(i);
        processLine(line);
    }
}

function processLine(line)
{
    let templateName = line[templateNameColumnIndex];

    templateName = templateName.substr(0, templateName.indexOf(" ")) + ".txt";

    if(fs.existsSync("./LTD/"+templateName))
    {
        var LTD = fs.readFileSync("./LTD/"+templateName);
        processed++;
    }
    else
    {
        notFound += templateName + "\n";
        notFoundCount++;
    }

    fs.writeFileSync("./LTDFocus/"+templateName, LTD);
}

console.log("Processed " + processed + " files!");

if(notFoundCount > 0)
{
    console.log("Could not locate " + notFoundCount + " files! Listed below:");
    console.log(notFound);
}