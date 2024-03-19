#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
 class info {
     public:
     float wight;
     float stature;
     double bmi;
     double weight_cost;
 };
 double a,b;
 int main(){
     info obj;
     string first_name;
     string last_name;
     string fullname = first_name + " " + last_name;
     string choice;
     char vote;
     cout <<"\t\t\t"<<"welcome to bmi program"<<"\n\n"<<"please fill your infomation"<<endl;
     cout<<"enter your name:"<<endl;
     cin >>first_name;
     cout<<"enter your last name:"<<endl;
     cin>>last_name;
     cout<<"\t\t\t"<<"welcome"<<fullname<<endl;
     cout<<"enter your weight bay kg first than your stature bay metre:"<<"\n";
     cin>>obj.wight>>obj.stature;
     a=obj.stature/100;
     b=a*a;
     obj.bmi=obj.wight/b;
     obj.weight_cost=obj.bmi - 18.5;
     cout <<"\n\n\n"<<"your bmi equal with:"<<obj.bmi<<"\n"<<endl;
     if(obj.weight_cost < 5){
        cout<<"your wight ok and you dont need to lose wight"<<endl;
     }else if (obj.weight_cost > 5){
        cout<<"you need to cost:"<<obj.weight_cost<<" to have normal wight"<<endl;
     }
     
     if(obj.bmi<=18.49){
         cout<<"under weight"<<endl;
         vote='a';
     }  
     
    else if(18.5<=obj.bmi && obj.bmi<=24.49){
         cout<<"you have normal weight"<<endl;
         vote='b';
     }
     
     else if(24.5<=obj.bmi && obj.bmi<=29.9){
         cout<<"you have extra weight"<<endl;
    vote='c';
     }
     
  else if(30<=obj.bmi && obj.bmi<=34.49){
         cout<<"coutFirst-degree obesity"<<endl;
         vote='d';
     }
  else if(34.5<=obj.bmi && obj.bmi<=40){
         cout<<"second degree obesity"<<endl;
         vote='e';
     }
      
     else{
         cout<<"wrong number or info"<<endl;
     }
     jump:
     cout<<"\n\n"<<"thank for your time we also have some advice about weight"<<"\n"<<"do you wane see them ?(yes/no)"<<endl;
     cin>> choice;
     if(choice == "yes" || choice == "Yes"){
         cout<<"theres some advice for you bay your bmi :"<<endl;
         switch (vote){
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

