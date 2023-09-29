// bmi java script code
// bmi programm with js
// bmi = weight / height **2
let bmi,weight,height;
alert("welcome to our programm in this programm we will calcuate your bmi.");
weight = +prompt("enter your weight(kg) please:");
height = +prompt("enter your height (m) please:");
height /= 100;
height **=2;
bmi = weight / height;
alert(bmi);
console.log("bmi ="+bmi);
if(bmi<18.4){
    alert("under weight")
    console.log("under weight")
}else if(bmi>18.4 && bmi<24.9){
    alert("normal weight")
    console.log("normal weight")
}else if(bmi>24.9 && bmi<39.9){
    alert("over weight")
    console.log("over weight")
}else if(bmi>=39.9){
    alert("obese")
    console.log("obese")   
}else{
    alert("wrong input !");
    console.log("error");
}
