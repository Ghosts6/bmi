#include <stdio.h>

void bmi(double w,double h);
void status(char value);
void lose(double bmi);

int main(){
    double weight,stature;
    char choice;
    label:
    printf("welcome to bmi calculator program : \n enter your weight by kg:");
    scanf("%lf",&weight);
    printf("now enter your stature by m: \n");
    scanf("%lf", &stature);
    bmi(weight,stature);
    printf("do you want to calculate again(y/n)?");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        goto label;
    }else{
        printf("end of program");
    }
    return 0;
}
void bmi(double w,double h){
    char range;
    double bmi,n1,n2;
    n1 = h /100; n2 = n1 * n1;
    bmi = w / n2;
    printf("your bmi equal with : %lf \n",bmi);
    if(bmi<=18.5){
        printf("bmi status : under weight\n");
        range = '1';
    }else if(18.5<bmi && bmi<=24.9){
        printf("bmi status : normal weight\n");
        range = '2';
    }else if(25<=bmi && bmi<=29.9){
        printf("bmi status : overweight\n");
        range = '3';
    }else if(30<=bmi){
        printf("bmi status : obesity\n");
        range = '4';
    }
    status(range);
    lose(bmi);
}

void status(char value){
    char choice;
    printf("thank for your time we also have some advice about weight, do you wane see them ?(y/n)\n");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y'){
        switch (value){
        case '1':
        printf("Eat more frequently. When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals.Choose nutrient-rich foods. As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds\n");
        break;
        case '2':
        printf("Foods high in sugar and calories lead to weight gain if you are not careful. Choose foods that are high in nutrition and taste, like fruits, vegetables and whole grains. You dont have to sacrifice your favorite foods in order to take care of your body either it s ok to have a couple of cheat meals or cheat days every once in a while.\n");
        break;
        case '3':
        printf("Following a healthy eating plan with fewer calories is often the first step in trying to treat overweight and obesity.");
        break;
        case '4':
        printf("Changing your eating and physical activity habits and lifestyle is difficult, but with a plan, effort, regular support, and patience, you may be able to lose weight and improve your health. The following tips may help you think about ways to lose weight, engage in regular physical activity, and improve health over the long-term.\n");
        break;
        default:
        printf("error");
        }
    }else{
        printf("thanks for time");
    }
}

void lose(double bmi){
    double weight_lose;
    weight_lose = bmi - 18.5;
    if(weight_lose < 5){
        printf("your weigh ok,you dont need lose much \n");
    }else if (weight_lose > 5){
        printf("you need to lose %.2f to be healthy \n", weight_lose);
    }else{
        printf("error");
    }    
}
