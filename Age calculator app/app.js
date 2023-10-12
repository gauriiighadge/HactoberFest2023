"use strict";
const middlepart=document.querySelector(".middle")
const submit=middlepart.lastElementChild
const labels=document.querySelectorAll("label")
const day=document.getElementById("day");
const month=document.getElementById("month");
const year=document.getElementById("year");
const formdivs=document.querySelectorAll(".form div");
const formsdiv1=document.querySelector(".forms-div1");
const formsdiv2=formsdiv1.nextElementSibling
const formsdiv3=formsdiv2.nextElementSibling
const spanmonth=document.querySelector("span.month");
const spanday=document.querySelector("span.day");
const spanyear=document.querySelector("span.year");
const inputs=document.querySelectorAll("input");
const date=new Date();

window.onload = function() {
    const numberInputs = document.querySelectorAll('input[type="number"]');
  
    numberInputs.forEach(input => {
      input.addEventListener('mousewheel', function(e) {
        e.preventDefault(); // Prevent the default scroll behavior
      });
    });
  };
  
// ################################# initial checks #######################


function initialChecks(){
    formdivs.forEach((divs,index)=>{
        labels[index].style.color=" hsl(0, 1%, 44%)";
        inputs[index].style.border="1px solid  hsl(0, 0%, 86%)";
        divs.setAttribute("add-content","");
    });
    formdivs.forEach((divs,index)=>{
        if(inputs[index].value===""){
                    labels[index].style.color="hsl(0, 100%, 67%)";
                    inputs[index].style.border="1px solid hsl(0, 100%, 67%)";
                    divs.setAttribute("add-content","This field is required");
                }
                
    })
   if(day.value && month.value && year.value){
   var yrreturn= yearErrorHandling();
   var monthreturn= monthErrorHandling();
   var dayreturn=dayerrorHandling();

}
if(yrreturn===undefined&&monthreturn===undefined&&dayreturn===undefined){
    return true
}
return false

}

// ######################### error handling ################################

function yearErrorHandling(){
    if(year.value>date.getFullYear()){
        formsdiv3.setAttribute("add-content","It must be in past");
        return false;
    }
    
}


function monthErrorHandling(){
    if(month.value>12){
        formsdiv2.setAttribute("add-content","Invalid month");
        return false;
    }
  
}

function dayerrorHandling(){
   
  if(day.value>29 && month.value==2){
        formsdiv1.setAttribute("add-content","Feb Month!!");
        return false;
  }
  else if(day.value>31 && !month.value%2===0){
    formsdiv1.setAttribute("add-content","Having 31 days!!");
    return false;
  }
  else if(day.value>30 && month.value%2===0){
  formsdiv1.setAttribute("add-content","Having 30 days!!");
  return false;
  }


}

// ########################### setting values #####################

 function setMonth(){
    if(date.getMonth()<Number(month.value)){
        spanmonth.textContent=-1*(date.getMonth()-Number(month.value));
    }
    else{
        spanmonth.textContent=date.getMonth()-Number(month.value);
    }
    month.value=""
  }
 function setDate(){
    if(date.getDate()<Number(day.value)){
        spanday.textContent=-1*(date.getDate()-Number(day.value));
    }
    else{
        spanday.textContent=date.getDate()-Number(day.value);
    }
    day.value=""
  }
function setYear(){
    spanyear.textContent=date.getFullYear()-Number(year.value);
    year.value=""
  }



submit.addEventListener("click",(e)=>{
    e.preventDefault();
   const returnedVal= initialChecks();
   console.log(returnedVal);
    if(day.value && month.value && year.value && returnedVal){
        setMonth();
        setDate();
        setYear();
    }

})

