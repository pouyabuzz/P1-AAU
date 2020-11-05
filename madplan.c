#include <stdio.h>


void run_program ();
void man_or_woman (int *gender, int *age, double *weight, double *height); 
void bmi_calculator (double weight, double height);
void bmr_calculator (int gender, double *bmr, double weight, double height, int age);
void consumption_func (double bmr, double *consumption, double activity_level);
void activity (double activity_level);
void mealplan (double consumption);

int main (){

    run_program ();
      
    return 0;
}

void run_program (){
    
    int gender, age;
    double bmr, weight, height, activity_level, consumption;
    
    man_or_woman (&gender, &age, &weight, &height);
    bmi_calculator (weight, height);
    bmr_calculator (gender, &bmr, weight, height, age);
    /*activity (&activity_level);*/
    consumption_func (bmr, &consumption, activity_level);
    mealplan (consumption);

}
    void man_or_woman (int *gender, int *age, double *weight, double *height) {
        
        printf("Insert 1 if you are a woman, and insert 2 if you are a man\n");
        scanf("%d", gender);
        if (*gender == 2) {
            printf("What is your weight sir?\n");    
            scanf("%lf", weight);
            printf("What is your height sir?\n");
            scanf("%lf", height);
            printf("What is your age sir?\n");
            scanf("%d", age);
        }
        else if (*gender == 1){
            printf("What is your weight Ma'am?\n");    
            scanf("%lf", weight);
            printf("What is your height Ma'am?\n");
            scanf("%lf", height);
            printf("What is your age Ma'am?\n");
            scanf("%d", age);
        }
    }
    void bmi_calculator (double weight, double height) {
        double bmi = weight / ((height / 100) * (height / 100)) ;
        printf("Your BMI is %lf \n", bmi);
    
    }
    void bmr_calculator (int gender, double *bmr, double weight, double height, int age) {
        if (gender == 1){
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
        printf("Your BMR is estimated to be %f\n", *bmr);
        }
        else if (gender == 2){
        *bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
        printf("Your BMR is estimated to be %f\n", *bmr);
        }
        
    }

    //Activity Level Function

                        /*void purpose (int *goal, double *bmi, double *consumption, double *kcal) {
                            printf("Insert 1 if you wish to lose weight.\n");
                            printf("Insert 2 if you wish to maintain your weight.\n");
                            printf("Insert 3 if you wish to gain more weight.\n");
                            scanf("%d", goal);
                            if (*goal == 1) {
                                printf("Based on your BMI, which is %f, and the fact that you wish to lose weight.\n", *bmi);
                                consumption (goal);
                            }

                            else if (*goal == 2) {
                                printf("Based on your BMI, which is %f, and the fact that you wish to maintain weight.\n", *bmi);
                                consumption (goal);
                            }
                            else if (*goal == 3) {
                                printf("Based on your BMI, which is %f, and the fact that you wish to gain weight.\n", *bmi);
                                consumption (goal);
                            }
                        }*/
                        
                        /*void lose (double *bmr, double *activity){
                            double consumption = (bmr * activity) - 500;
                            printf("Your daily calorie intake should be %f\n", consumption);
                        }
                        void maintain (double *bmr, double *activity){
                            double consumption = (bmr*activity);
                            printf("Your daily calorie intake should be %f\n", consumption);
                        }
                        void gain (double *bmr, double *activity){
                            double consumption = (bmr*activity)+500;
                            printf("Your daily calorie intake should be %f\n", consumption);
                        }*/
void consumption_func(double bmr, double *consumption, double activity_level){

    int goal;
    
    printf("Insert 1 if you wish to lose weight.\n");
    printf("Insert 2 if you wish to maintain your weight.\n");
    printf("Insert 3 if you wish to gain more weight.\n");
    scanf("%d", &goal);

    switch (goal){

    case 1:
        *consumption = (bmr * activity_level) - 500;
        printf("Your daily calorie intake should be %f\n", *consumption);
        
        break;

    case 2:
        *consumption = (bmr * activity_level);
        printf("Your daily calorie intake should be %f\n", *consumption);

        break;

    case 3: 
        *consumption = (bmr * activity_level) + 500;
        printf("Your daily calorie intake should be %f\n", *consumption);

        break;
    
    }

}


void mealplan (double consumption) {
    
    if (consumption >= 20000) {
        printf("Breakfast: Havregryn\n");
        printf("Lunch: Havregryn\n");
        printf("Dinner: Havregryn\n");
    }
    else if (consumption >= 19999 && consumption <= 18000) {
        printf("Breakfast: Rugbrød\n");
        printf("Lunch: Rugbrød\n");
        printf("Dinner: Rugbrød\n");
    }    
    else if (consumption <= 17999) {
        printf("Breakfast: Toast\n");
        printf("Lunch: Toast\n");
        printf("Dinner: Toast\n");
    }
}

    