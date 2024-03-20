#!/bin/bash

echo "---welcome to BMI calculator program---"
read -p "Enter your weight in kg: " weight
read -p "Enter your height in m: " height

# Calculate stature in meters
statureM=$(echo "scale=2; $height / 100" | bc)

# Calculate stature power by 2
stature_power_by_2=$(echo "$statureM * $statureM" | bc)

# Calculate BMI
bmi=$(echo "scale=2; $weight / $stature_power_by_2" | bc)

echo "BMI: $bmi"

if (( $(echo "$bmi < 18.5" | bc -l) )); then
    echo "You are underweight"
    status=1
elif (( $(echo "$bmi >= 18.5 && $bmi <= 24.9" | bc -l) )); then
    echo "You have normal weight"
    status=2
elif (( $(echo "$bmi >= 25 && $bmi <= 29.9" | bc -l) )); then
    echo "You have overweight"
    status=3
elif (( $(echo "$bmi >= 30" | bc -l) )); then
    echo "BMI status: Obesity"
    status=4
fi

print_advice() {
    if [[ $1 -eq 1 ]]; then
        echo "Eat more frequently. When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals.Choose nutrient-rich foods. As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds"
    elif [[ $1 -eq 2 ]]; then
        echo "Foods high in sugar and calories lead to weight gain if you are not careful. Choose foods that are high in nutrition and taste, like fruits, vegetables and whole grains. You dont have to sacrifice your favorite foods in order to take care of your body either it s ok to have a couple of cheat meals or cheat days every once in a while."
    elif [[ $1 -eq 3 ]]; then
        echo "Following a healthy eating plan with fewer calories is often the first step in trying to treat overweight and obesity."
    elif [[ $1 -eq 4 ]]; then
        echo "Changing your eating and physical activity habits and lifestyle is difficult, but with a plan, effort, regular support, and patience, you may be able to lose weight and improve your health. The following tips may help you think about ways to lose weight, engage in regular physical activity, and improve health over the long-term."
    else
        echo "Error"
    fi
}

echo "Thank you for your time. We also have some advice about weight, do you want to see them? (y/n):"
read choice

if [[ $choice == "y" || $choice == "Y" ]]; then
    print_advice $status
else
    echo "Thanks for your time"
fi
