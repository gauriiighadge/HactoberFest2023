const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout,
});


const resize=require('./utils/resize')

let imageData={
    path:'',
    quality:0
}

readline.question(`Enter the path of image:`, (imagePath) => {
    console.log(`Entered path: ${imagePath}`);
    imageData.path=imagePath;
});
readline.question(`Enter the path of image:`, (quality) => {
    console.log(`Entered path: ${quality}`);
    imageData.quality=quality;
    readline.close();
});

//Resize Image
resize(imageData.path, imageData.quality)