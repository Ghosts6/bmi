# bmi with python3
# this program want to check your bmi and health stats
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
