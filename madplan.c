#include <stdio.h>
#include <math.h>

    void man_or_woman (void);
    void bmicalculator (void);
    void bmrcalculator (void);
    void purpose (void);
    void calorieconsumption (void);
    void foodplan (void);
    void gain (void);
    void maintain (void);
    void lose (void);

    int gender, goal, age, ok;
    double weight, height, bmi, intake, kcal;

    int main (void) {
        man_or_woman();
        bmicalculator();
        bmrcalculator();
        purpose();
        foodplan();
    }
    void man_or_woman () {
        printf("Insert 1 if you are a woman, and insert 2 if you are a man\n");
        scanf("%d", &gender);
        if (gender = 2) {
            printf("What is your weight sir?\n");    
            scanf("%lf", &weight);
            printf("What is your height sir?\n");
            scanf("%lf", &height);
            printf("What is your age sir?\n");
            scanf("%lf", &age);
        }
        else if (gender = 1){
            printf("What is your weight Ma'am?\n");    
            scanf("%lf", &weight);
            printf("What is your height Ma'am?\n");
            scanf("%lf", &height);
            printf("What is your age Ma'am?\n");
            scanf("%lf", &age);
        }
    }
    void bmicalculator () {
        bmi = weight /((height/100) * (height/100)) ;
        printf("Your BMI is %f\n", bmi);
        

    }
    void bmrcalculator () {
        if (gender = 1){
        kcal = (10 * weight) + (6.25 * height) - (5*age) - 161;
        printf("Your BMR is estimated to be %f\n", kcal);
        }
        else if (gender =2){
        kcal = (10 * weight) + (6.25 * height) - (5*age) + 5;
        printf("Your BMR is estimated to be %f\n", kcal);
        }
    }
    void purpose () {
        printf("Insert 1 if you wish to lose weight.\n");
        printf("Insert 2 if you wish to maintain your weight.\n");
        printf("Insert 3 if you wish to gain more weight.\n");
        scanf("%d", &goal);
        if (goal == 1) {
            printf("Based on your BMI, which is %f, and the fact that you wish to lose weight.\n", bmi);
            lose();
        }

        else if (goal == 2) {
            printf("Based on your BMI, which is %f, and the fact that you wish to maintain weight.\n", bmi);
            maintain();
        }
        else if (goal == 3) {
            printf("Based on your BMI, which is %f, and the fact that you wish to gain weight.\n", bmi);
            gain();
        }

    }
    void lose (){
        if (bmi<=20) {
            intake = 15000 - kcal;
        }
        else if ((bmi>20) && (bmi<=25)) {
            intake = 16000 - kcal;
        }
        else if (bmi>=25) {
            intake = 17000 - kcal;
            }
        printf("Your daily calorie intake should be %f\n", intake);
    }
    void maintain (){
        if (bmi<=20) {
            intake = 17000 - kcal;
        }
        else if ((bmi>20) && (bmi<=25)) {
            intake = 18000 - kcal;
        }
        else if (bmi>=25) {
            intake = 19000 - kcal;
            }
        printf("Your daily calorie intake should be %f\n", intake);
    }
    void gain (){
        if (bmi<=20) {
            intake = 20000 - kcal;
        }
        else if ((bmi>20) && (bmi<=25)) {
            intake = 21000 - kcal;
        }
        else if (bmi>=25) {
            intake = 22000 - kcal;
            }
        printf("Your daily calorie intake should be %f\n", intake);
    }
    void foodplan () {
        printf("Would you like to see your mealplan?\n");
        printf("Then insert 1\n");
        scanf("%d", &ok);
        if (ok = 1) {
            if (intake>=20000) {
                printf("Breakfast: Havregryn\n");
                printf("Lunch: Havregryn\n");
                printf("Dinner: Havregryn\n");
            }
            else if (intake>=19999 && intake<=18000) {
                printf("Breakfast: Rugbrød\n");
                printf("Lunch: Rugbrød\n");
                printf("Dinner: Rugbrød\n");
            }
            else if (intake<= 17999) {
                printf("Breakfast: Toast\n");
                printf("Lunch: Toast\n");
                printf("Dinner: Toast\n");
            }
        }

    }