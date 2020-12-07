#include <stdio.h>
#include <stdlib.h>

#include "Breakfast.h"
#include "Dinner.h"
#include "Lunch.h"

// test

void run_program();
void empty_stdin();
void man_or_woman(int *gender, int *age, double *weight, double *height);
void bmi_calculator(double weight, double height, double *bmi);
void bmi_recommend(double bmi);
void bmr_calculator(int gender, double *bmr, double weight, double height,
                    int age);
void consumption_func(double bmr, int *consumption, double activity_level);
void activity(double *activity_level);
void mealplan(int consumption);

int main() {
    run_program();

    return 0;
}

void run_program() {
    int gender, age, consumption;
    double bmr, bmi, weight, height, activity_level;

    man_or_woman(&gender, &age, &weight, &height);
    bmi_calculator(weight, height, &bmi);
    bmi_recommend(bmi);
    bmr_calculator(gender, &bmr, weight, height, age);
    activity(&activity_level);
    consumption_func(bmr, &consumption, activity_level);
    mealplan(consumption);
}

void empty_stdin() { /* simple helper-function to empty stdin */

    char c = getchar();

    while (c != '\n') {
        c = getchar();
    }
}

void man_or_woman(int *gender, int *age, double *weight, double *height) {
    int rtn = 0;

    do {
        for (;;) {
            printf(
                "Insert 1 if you are a woman, or insert 2 if you are a man\n");
            rtn = scanf(" %d", gender);

            if (rtn == 0) {
                /* fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (*gender < 1 || *gender > 2);

    do {
        for (;;) {
            printf("What is your weight?\n");
            rtn = scanf(" %lf", weight);

            if (rtn == 0) {
                /*fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (*weight <= 0);

    do {
        for (;;) {
            printf("What is your height?\n");
            rtn = scanf("%lf", height);

            if (rtn == 0) {
                /*fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (*height <= 0);

    do {
        for (;;) {
            printf("What is your age?\n");
            rtn = scanf("%d", age);

            if (rtn == 0) {
                /*fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (*age <= 0);
}

void bmi_calculator(double weight, double height, double *bmi) {
    *bmi = weight / ((height / 100) * (height / 100));
    printf("Your BMI is %.2f \n", *bmi);
}
void bmi_recommend(double bmi) {
    if (bmi > 25) {
        printf(
            "In relation to your BMI and with a general health perspective,\n");
        printf("it is our recommendation that you lose weight.");
    } else if (bmi >= 18.5 && bmi <= 25) {
        printf(
            "In relation to your BMI and with a general health perspective,\n");
        printf("it is our recommendation that you maintain weight.");
    } else if (bmi < 18.5) {
        printf(
            "In relation to your BMI and with a general health perspective,\n");
        printf("it is our recommendation that you gain weight.");
        printf("Your bmi is %f", bmi);
    }
}
void bmr_calculator(int gender, double *bmr, double weight, double height,
                    int age) {
    if (gender == 1) {
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    } else if (gender == 2) {
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    }
}

void activity(double *activity_level) {
    int choice, rtn = 0;
    do {
        for (;;) {
            printf("What is your activity level?\n\n");
            printf("None or very little activity:                  type 1\n");
            printf("Little physical activity - 1-3 times a week:   type 2\n");
            printf("Moderate physical activity - 3-5 times a week: type 3\n");
            printf("Hard physical activity - 6-7 times a week:     type 4\n");
            printf("Very hard physical activity - 2 times a day:   type 5\n");
            rtn = scanf("%d", &choice);

            if (rtn == 0) {
                /*fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (choice < 1 || choice > 5);

    switch (choice) {
        case 1:
            *activity_level = 1.2;
            break;

        case 2:
            *activity_level = 1.375;
            break;

        case 3:
            *activity_level = 1.55;
            break;

        case 4:
            *activity_level = 1.725;
            break;

        case 5:
            *activity_level = 1.9;
            break;
    }
}

void consumption_func(double bmr, int *consumption, double activity_level) {
    int goal, rtn = 0;

    do {
        for (;;) {
            printf("Insert 1 if you wish to lose weight.\n");
            printf("Insert 2 if you wish to maintain your weight.\n");
            printf("Insert 3 if you wish to gain more weight.\n");
            rtn = scanf("%d", &goal);

            if (rtn == 0) {
                /*fputs("\nerror: invalid integer input.\n", stderr);*/
                empty_stdin();
            } else {
                empty_stdin();
                break;
            }
        }
    } while (goal < 1 || goal > 3);

    switch (goal) {
        case 1:
            *consumption = (bmr * activity_level) - 500;
            printf("Your daily calorie intake should be %d kcal\n",
                   *consumption);
            break;

        case 2:
            *consumption = (bmr * activity_level);
            printf("Your daily calorie intake should be %d kcal\n",
                   *consumption);
            break;

        case 3:
            *consumption = (bmr * activity_level) + 500;
            printf("Your daily calorie intake should be %d kcal\n",
                   *consumption);
            break;
    }
}

void mealplan(int consumption) {
      int breakfast, lunch;

    breakfast = consumption / 3;

    printf("\n\n");
    printf(" For Breakfast: \n\n");
    consumption -= breakfast_meal(breakfast);
    lunch = consumption/2;
    printf("Calories left after breakfast: %d\n", lunch * 2);

    printf("\n\n");
    printf(" For Lunch: \n\n");
    consumption -= lunch_meal(lunch);
    printf("Calories left after lunch: %d\n", consumption);

    printf("\n\n");
    printf(" For Dinner: \n\n"); 
    consumption -= dinner_meal(consumption);
    if(consumption < 0){
        consumption = (consumption * (-1));
        printf("Calories exceeded with: %d\n", consumption);
    }
    else if(consumption > 0){
        printf("Calories left: %d\n", consumption);
    }
}
