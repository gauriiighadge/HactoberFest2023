const Jimp = require('jimp');




const resize = (imagePath, quality) => {
    Jimp.read("image.jpg")
        .then((lenna) => {
            return lenna
                //.resize(256, 256) // resize
                .quality(quality) // set JPEG quality
                //.greyscale() // set greyscale
                .write("lena-small-bw.jpg"); // save
        })
        .catch((err) => {
            console.error(err);

        });
}
module.exports=resize;