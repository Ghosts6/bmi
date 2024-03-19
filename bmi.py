# this program want to check your bmi and health stats
class MyInfo:
    weight = int()
    stature = int()
    name = ""
    lname = ""
    pass
    
MyInfo.name = input("enter your name :")
MyInfo.lname = input("enter your lastname:")
full_name = MyInfo.name + " " + MyInfo.lname
MyInfo.weight = float(input("enter your weight(kg):"))  
MyInfo.stature = float(input("enter your stature (m):")) 
statureM = MyInfo.stature / 100 ; stature_power_by_2 = statureM * statureM
bmi =MyInfo.weight / stature_power_by_2
print("mr/mrs",full_name,"your bmi equal with :",bmi)

if(bmi<=18.49):
    print("you are under normal weight")
    status = "u"
elif(18.5<=bmi and bmi<=24.49):
    print("you have normal weight")
    status = "n"
elif(25<=bmi and bmi <= 29.9):
    print("you have extra weight")
    status = "x"
elif(30 <= bmi):
    print("bmi status : obesity")
    status = "o"
print("thank for your time we also have some advice about weight, do you wane see them ?(y/n):")
choice = input("")
if choice == "y" or choice == "Y":
    if status == "u":
        print("Eat more frequently. When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals.Choose nutrient-rich foods. As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds")
    elif status == "n":
        print("Foods high in sugar and calories lead to weight gain if you are not careful. Choose foods that are high in nutrition and taste, like fruits, vegetables and whole grains. You dont have to sacrifice your favorite foods in order to take care of your body either it s ok to have a couple of cheat meals or cheat days every once in a while.")
    elif status == "x":
        print("Following a healthy eating plan with fewer calories is often the first step in trying to treat overweight and obesity")
    elif status == "o":
        print("Changing your eating and physical activity habits and lifestyle is difficult, but with a plan, effort, regular support, and patience, you may be able to lose weight and improve your health. The following tips may help you think about ways to lose weight, engage in regular physical activity, and improve health over the long-term")
    else :
        print("Error")
else :
    print("thanks for time")

weight_lose = bmi - 18.5
if weight_lose < 5 :
    print("your weigh ok,you dont need lose much ")
elif weight_lose > 5:
    print("you need to lose", weight_lose, "to be healthy")
