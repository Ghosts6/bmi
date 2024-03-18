//bmi with c
#include <stdio.h>
void bmi(double w,double h);
int main(){
    double weight,stature;
    printf("welcome to bmi calculator program : \n enter your weight and stature by kg and m:");
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
