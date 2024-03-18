![baner](https://github.com/Ghosts6/Local-website/blob/main/img/Baner.png)

# ⚕️bmi

Hi 👋! this is bmi calculator program which write with differend languages such as python c++ c and javascropt.


# 🔍code sample:

here we have c++ code, which use oop to handle data and if we want to talk about feature of this program we can 
point to advise that it give to us based on our bmi near calcute bmi.
        
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

 # 🎥video:
