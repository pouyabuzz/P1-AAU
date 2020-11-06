#include <stdio.h>


void run_program();
void man_or_woman(int *gender, int *age, double *weight, double *height);
void bmi_calculator(double weight, double height);
void bmr_calculator(int gender, double *bmr, double weight, double height, int age);
void consumption_func(double bmr, int *consumption, double activity_level);
void activity(double *activity_level);
void mealplan(int consumption);

int main() {

    run_program();

    return 0;
}

void run_program() {

    int gender, age, consumption;
    double bmr, weight, height, activity_level;

    man_or_woman(&gender, &age, &weight, &height);
    bmi_calculator(weight, height);
    bmr_calculator(gender, &bmr, weight, height, age);
    activity(&activity_level);
    consumption_func(bmr, &consumption, activity_level);
    mealplan(consumption);
}

void man_or_woman(int *gender, int *age, double *weight, double *height) {

    printf("Insert 1 if you are a woman, and insert 2 if you are a man\n");
    scanf("%d", gender);

    printf("What is your weight?\n");
    scanf("%lf", weight);
    printf("What is your height sir?\n");
    scanf("%lf", height);
    printf("What is your age?\n");
    scanf("%d", age);
}

void bmi_calculator(double weight, double height) {
    double bmi = weight / ((height / 100) * (height / 100));
    printf("Your BMI is %.2f \n", bmi);
}

void bmr_calculator(int gender, double *bmr, double weight, double height, int age) {
    if (gender == 1) {
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    }
    else if (gender == 2) {
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    }
}

void activity(double *activity_level) {

    int x;

    printf("What is your activity level?\n\n");
    printf("None or very little activity:                  type 1\n");
    printf("Little physical activity - 1-3 times a week:   type 2\n");
    printf("Moderate physical activity - 3-5 times a week: type 3\n");
    printf("Hard physical activity - 6-7 times a week:     type 4\n");
    printf("Very hard physical activity - 2 times a day:   type 5\n");
    scanf("%d", &x);

    switch (x) {

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

    int goal;

    printf("Insert 1 if you wish to lose weight.\n");
    printf("Insert 2 if you wish to maintain your weight.\n");
    printf("Insert 3 if you wish to gain more weight.\n");
    scanf("%d", &goal);

    switch (goal) {

    case 1:
        *consumption = (bmr * activity_level) - 500;
        printf("Your daily calorie intake should be %d kcal\n", *consumption);
        break;

    case 2:
        *consumption = (bmr * activity_level);
        printf("Your daily calorie intake should be %d kcal\n", *consumption);
        break;
        
    case 3:
        *consumption = (bmr * activity_level) + 500;
        printf("Your daily calorie intake should be %d kcal\n", *consumption);
        break;
    }
}

void mealplan(int consumption) {
    
}

