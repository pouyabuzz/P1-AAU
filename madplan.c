#include <stdio.h>
#include <stdlib.h>

/* Used to include functions from other c-files  */
#include "Breakfast.h"
#include "Dinner.h"
#include "Lunch.h"

/* Prototyper */
void run_program();
void empty_stdin();
void man_or_woman(int *gender, int *age, double *weight, double *height);
void bmi_calculator(double weight, double height, double *bmi);
void bmi_recommend(double bmi);
void bmr_calculator(int gender, double weight, double height, int age,
                    double *bmr);
void consumption_func(double bmr, double activity_level, int *consumption);
void activity(double *activity_level);
void mealplan(int consumption);

int main() {
    printf(
        "DISCLAIMER: Generated mealplan is for guidance only.\nPlease see an "
        "expert if you have any severe health issues\n\n");
    run_program();
    return 0;
}

void run_program() {
    int gender, age, consumption;
    double bmr, bmi, weight, height, activity_level;
    /* Call of all functions */
    man_or_woman(&gender, &age, &weight, &height);
    bmi_calculator(weight, height, &bmi);
    bmi_recommend(bmi);
    bmr_calculator(gender, weight, height, age, &bmr);
    activity(&activity_level);
    consumption_func(bmr, activity_level, &consumption);
    mealplan(consumption);
}

/*empties stdin */
void check_data() {
    char c = getchar();

    /* Continues to loop through getchar until new line is found */
    while (c != '\n') {
        c = getchar();
    }
}

/* Asking for user input to calculate BMI and BMR */
void man_or_woman(int *gender, int *age, double *weight, double *height) {
    /* rtn = road to nowhere */
    int rtn = 0;

    /* Keeps asking until valid input is received */
    do {
        /* Starting infinite loop */
        for (;;) {
            printf(
                "Insert 1 if you are a woman, or insert 2 if you are a man\n");
            rtn = scanf(" %d", gender);

            /* empties stdin after invalid input */
            if (rtn == 0) {
                check_data();
            } else {
                /* Breaking loop after valid input */
                break;
            }
        }
    } while (*gender < 1 || *gender > 2);

    do {
        for (;;) {
            printf("What is your weight?\n");
            rtn = scanf(" %lf", weight);

            if (rtn == 0) {
                check_data();
            } else {
                break;
            }
        }
    } while (*weight <= 0);

    do {
        for (;;) {
            printf("What is your height?\n");
            rtn = scanf("%lf", height);

            if (rtn == 0) {
                check_data();
            } else {
                break;
            }
        }
    } while (*height <= 0);

    do {
        for (;;) {
            printf("What is your age?\n");
            rtn = scanf("%d", age);

            if (rtn == 0) {
                check_data();
            } else {
                break;
            }
        }
    } while (*age <= 0);
}

void bmi_calculator(double weight, double height, double *bmi) {
    /* Calculates users BMI using input from man_or_woman function */
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
    } else {
        printf(
            "In relation to your BMI and with a general health perspective,\n");
        printf("it is our recommendation that you gain weight.");
        printf("Your bmi is %f", bmi);
    }
}

/*uses Harris-Benedict formula to calculate BMR*/
void bmr_calculator(int gender, double weight, double height, int age,
                    double *bmr) {
    if (gender == 1) {
        /* Calculate BMR for females */
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    } else {
        /* Calculate BMR for males */
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        printf("Your BMR is estimated to be %.2f\n", *bmr);
    }
}

/*Uses input to determine which constant is used to multiply BMR*/
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
                check_data();
            } else {
                break;
            }
        }
    } while (choice < 1 || choice > 5);

    /* Constants used for BMR */
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

/* Calculates total daily calorie intake */
void consumption_func(double bmr, double activity_level, int *consumption) {
    int goal, rtn = 0;

    do {
        /* User motivation for using the mealplan */
        for (;;) {
            printf("Insert 1 if you wish to lose weight.\n");
            printf("Insert 2 if you wish to maintain your weight.\n");
            printf("Insert 3 if you wish to gain more weight.\n");
            rtn = scanf("%d", &goal);

            if (rtn == 0) {
                check_data();
            } else {
                break;
            }
        }
    } while (goal < 1 || goal > 3);

    /* Calculates calorie value depending on user motivation */
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

/* Generate the daily mealplan */
void mealplan(int consumption) {
    int breakfast, lunch;

    breakfast = consumption / 3;

    printf("\n\n");
    printf(" For Breakfast: \n\n");
    /* Subtracts meal calories from total daily calorie intake */
    consumption -= breakfast_meal(breakfast);
    lunch = consumption / 2;
    printf("Calories left after breakfast: %d\n", lunch * 2);

    printf("\n\n");
    printf(" For Lunch: \n\n");
    consumption -= lunch_meal(lunch);
    printf("Calories left after lunch: %d\n", consumption);

    printf("\n\n");
    printf(" For Dinner: \n\n");
    consumption -= dinner_meal(consumption);

    /* Informs user whether or not they exceeds daily calories */
    if (consumption < 0) {
        consumption = (consumption * (-1));
        printf("Calories exceeded with: %d\n", consumption);
    } else if (consumption > 0) {
        printf("Calories left: %d\n", consumption);
    }
}
