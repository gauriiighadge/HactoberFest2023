const cross=document.getElementById('cross')
const bar=document.getElementById('bar')
const nav=document.getElementById('nav')
const navBtn=document.getElementById('nav-btn')
const show=()=>{
    bar.classList.add('display')
    cross.classList.remove('display')
    nav.style="display:block"
    navBtn.style="display:block"
}
const collapse=()=>{
    bar.classList.remove('display')
    cross.classList.add('display')
    nav.style="display:none"
    navBtn.style="display:none"
    console.log("chala")
}



