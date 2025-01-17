import java.util.Scanner;

public class Bmi {
    public static void main (String[] args) {
        // Bmi program our goal is to calculate you bmi and suggest you some adjustment
        // Bmi = wight(kg) / (height * height)
        // Define

        Scanner scanner = new Scanner(System.in);
        String name, lastName, fullName;
        double wight, height, bmi, wightLost;
        char choice, vote;
        
        // Input 

        System.out.println("Enter your first name :");
        name = scanner.nextLine();

        System.out.println("Enter your last name :");
        lastName = scanner.nextLine();

        System.out.println("Enter your wight in kg :ex(70kg)");
        wight = scanner.nextDouble();

        System.out.println("Enter your hight in meter :ex(1.8m)");
        height = scanner.nextDouble();

        // Calculate

        fullName =  name + " " + lastName; // name.concat(lastName);
        height *= height;
        bmi = wight / height;
        wightLost = bmi - 18.5d;

        // Result

        System.out.println("mr/mrs " + fullName + " your bmi is :" + bmi + " !");

        if (wightLost > 5) {
            System.out.println("you need to cost :" + wightLost + " to have normal wight");           
        } else if (wightLost < 5) {
            System.out.println("your wight ok and you dont need to lose wight");            
        } else {
            System.out.println("Error !");                
        }
        // status

        if(bmi<=18.49){
            System.out.println("under weight");
            vote = 'a';
        } else if(18.5<=bmi && bmi<=24.49) {
            System.out.println("you have normal weight");
            vote = 'b';
        } else if(24.5<=bmi && bmi<=29.9) {
            System.out.println("you have extra weight");
            vote = 'c';
        } else if(30<=bmi && bmi<=34.49) {
            System.out.println("First-degree obesity");
            vote = 'd';
        } else if(34.5<=bmi && bmi<=40) {
            System.out.println("second degree obesity");
            vote = 'e';
        } else {
            System.out.println("wrong number or info");
            vote = 'f';
        }
            
        // Advise section
        System.out.println("Do you want to get some advise based on your bmi?(y/n)");
        choice = scanner.next().charAt(0);
            if (choice == 'y' || choice == 'Y') {
                switch (vote) {
                    case 'a':
                    System.out.println("Eat more frequently. When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals.Choose nutrient-rich foods. As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds");
                    break;
                    case 'b':
                    System.out.println("Foods high in sugar and calories lead to weight gain if you are not careful. Choose foods that are high in nutrition and taste, like fruits, vegetables and whole grains. You don’t have to sacrifice your favorite foods in order to take care of your body either–it’s ok to have a couple of cheat meals or cheat days every once in a while.");
                    break;
                    case 'c':
                    System.out.println("Following a healthy eating plan with fewer calories is often the first step in trying to treat overweight and obesity.");
                    break;
                    case 'd':
                    System.out.println("Changing your eating and physical activity habits and lifestyle is difficult, but with a plan, effort, regular support, and patience, you may be able to lose weight and improve your health. The following tips may help you think about ways to lose weight, engage in regular physical activity, and improve health over the long-term.");
                    break;
                    case 'e':
                    System.out.println("Some people benefit from a formal weight-management program. In a weight-management program, trained weight-management specialists will design a broad plan just for you and help you carry out your plan. Plans include a lower-calorie diet, increased physical activity, and ways to help you change your habits and stick with them. You may work with the specialists on-site (that is, face-to-face) in individual or group sessions. The specialists may contact you regularly by telephone or internet to help support your plan. Devices such as smartphones, pedometers, and accelerometers may help you track how well you are sticking with your plan.People who are overweight or have obesity should also start regular physical activity when they begin their healthy eating plan. Being active may help you use calories. Regular physical activity may help you stay at a healthy weight.");
                    break;

                    default :
                    System.out.println("Error on switch logic !");
                }
        } else {
            System.out.print("End of program !");
        }

        scanner.close();
    }
}
