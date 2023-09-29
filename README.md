# bmi
<h2 align="left">Hi 👋! this is bmi calculator program which write with differend languages such as python c++ c and javascropt.</h2>

```c
// bmi.c
#include <stdio.h>
void bmi(double w,double h);
int main(){
    double weight,stature;
    printf("welcome to bmi calculator program : \n enter your weight and stature bay kg and m:");
    scanf("%lf %lf",&weight,&stature);
    bmi(weight,stature);
    return 0;
}
void bmi(double w,double h){
    double bmi,n1,n2;
    n1 = h /100; n2 = n1 * n1;
    bmi = w / n2;
    printf("your bmi equal with : %lf \n",bmi);
    if(bmi<=18.5){
        printf("bmi status : under weight\n");
    }else if(18.5<bmi||bmi<=24.9){
        printf("bmi status : normal weight\n");
    }else if(25<=bmi||bmi<=29.9){
        printf("bmi status : overweight\n");
    }else if(30<=bmi){
        printf("bmi status : obesity\n");
    }
}
```
        
```cpp
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
 class info {
     public:
     float wight;
     float stature;
     double bmi;
     double wighetcost;
 };
 double a,b;
 int main(){
     info obj;
     string firstname;
     string lastname;
     string fullname = firstname + " " + lastname;
     string choice;
     char voite;
     cout <<"\t\t\t"<<"welcome to bmi progtam"<<"\n\n"<<"please fill your infomation"<<endl;
     cout<<"enter your name:"<<endl;
     cin >>firstname;
     cout<<"enter your last name:"<<endl;
     cin>>lastname;
     cout<<"\t\t\t"<<"welcome"<<fullname<<endl;
     cout<<"enter your wighet bay kg first than your stature bay metre:"<<"\n";
     cin>>obj.wight>>obj.stature;
     a=obj.stature/100;
     b=a*a;
     obj.bmi=obj.wight/b;
     obj.wighetcost=obj.bmi - 18.5;
     cout <<"\n\n\n"<<"your bmi equal with:"<<obj.bmi<<"\n"<<"you need to cost:"<<obj.wighetcost<<" to have normal wighet"<<endl;
     if(obj.bmi<=18.49){
         cout<<"under wighet"<<endl;
         voite='a';
     }  
     
    else if(18.5<=obj.bmi && obj.bmi<=24.49){
         cout<<"you have normal wighet"<<endl;
         voite='b';
     }
     
     else if(24.5<=obj.bmi && obj.bmi<=29.9){
         cout<<"you have extera wighet"<<endl;
    voite='c';
     }
     
  else if(30<=obj.bmi && obj.bmi<=34.49){
         cout<<"coutFirst-degree obesity"<<endl;
         voite='d';
     }
  else if(34.5<=obj.bmi && obj.bmi<=40){
         cout<<"second degree obesity"<<endl;
         voite='e';
     }
      
     else{
         cout<<"wrong number or info"<<endl;
     }
     jump:
     cout<<"\n\n"<<"thank for your time wealso have some advice about wighet"<<"\n"<<"do you wane see them ?(yes/no)"<<endl;
     cin>> choice;
     if(choice == "yes" || choice == "Yes"){
         cout<<"therse some advice for you bay your bmi :"<<endl;
         switch (voite){
             case 'a':
              cout<<"Eat more frequently. When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals.Choose nutrient-rich foods. As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds"<<endl;
              break;
              case 'b':
              cout<<"Foods high in sugar and calories lead to weight gain if you are not careful. Choose foods that are high in nutrition and taste, like fruits, vegetables and whole grains. You don’t have to sacrifice your favorite foods in order to take care of your body either–it’s ok to have a couple of cheat meals or cheat days every once in a while."<<endl;
              break;
              case 'c':
              cout<<"Following a healthy eating plan with fewer calories is often the first step in trying to treat overweight and obesity."<<endl;
              break;
              case 'd':
              cout<<"Changing your eating and physical activity habits and lifestyle is difficult, but with a plan, effort, regular support, and patience, you may be able to lose weight and improve your health. The following tips may help you think about ways to lose weight, engage in regular physical activity, and improve health over the long-term."<<endl;
              break;
              case 'e':
              cout<<"Some people benefit from a formal weight-management program. In a weight-management program, trained weight-management specialists will design a broad plan just for you and help you carry out your plan. Plans include a lower-calorie diet, increased physical activity, and ways to help you change your habits and stick with them. You may work with the specialists on-site (that is, face-to-face) in individual or group sessions. The specialists may contact you regularly by telephone or internet to help support your plan. Devices such as smartphones, pedometers, and accelerometers may help you track how well you are sticking with your plan.People who are overweight or have obesity should also start regular physical activity when they begin their healthy eating plan. Being active may help you use calories. Regular physical activity may help you stay at a healthy weight."<<endl;
              break;
              default:
              cout<<"program error"<<"\n";
             
              
         }
     }
     else if (choice=="no" || choice=="No"){
         cout<<"\t\t\t"<<"\\\\thank for time////"<<endl;
         
     }
     else{
         cout<<"wrong answer try again"<<endl;
         goto jump;
     }
         
     
     return 0;
 }
 ```

 ```python
class MyInfo:
    weight = int()
    stature = int()
    name = ""
    lname = ""
    pass
MyInfo.name = input("enter your name :")
MyInfo.lname = input("enter your lastname:")
MyInfo.weight = input("enter your weight(kg):")  # type: ignore
MyInfo.stature = input("enter your stature (m):")  # type: ignore
MyInfo.stature = int(MyInfo.stature) ;MyInfo.weight = int (MyInfo.weight)
A = MyInfo.stature / 100 ; B = A * A
bmi =MyInfo.weight / B
print("mr/mrs",MyInfo.name,"your bmi equal with :",bmi)
if(bmi<=18.49):
    print("you are under normal weight")
elif(18.5<=bmi and bmi<=24.49):
    print("you have normal weight")
elif(24.5<=bmi):
    print("you have extra weight")
```
```javascript
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
```

```html
<html>
 <head>
    <meta charset="UTF-8">  
    <meta name="viewport" content="width=device-width, initial-scale=1.0">  
    <title>Document</title> 
 </head>
 <body>
    <script src ="../bmi/js/script.js">
    </script>
 </body>
</html>
```
