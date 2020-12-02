#include "Lunch.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// recipes is from eatthismuch.com
// lunch low kcal: 200 - 400 kcal,
// lunch low-medium: 400 - 600 kcal.
// lunch medium kcal: 600 - 800 kcal.
// lunch high_medium: 800 - 1000 kcal.
// lunch high kcal: 1000 - 1200 kcal.

void cottage_cheese_and_raspberries();
void cucumber_avocado_salad();
void broccoli_n_feta_omelet();
void curry_tuna_salad();
void peanut_butter_yogurt();
void turkey_sandwiches();
void ham_and_salami_rollups();
void almond_mango_protein_shake();
void apricot_jam_and_almond_butter_sandwich();
void roast_beef_and_cheddar_sandwich();

// lunch low kcal: 200 - 400 kcal,
typedef enum { cottage_cheese_and_raspberries1, cucumber_avocado_salad1} lunch_low_kcal;

// lunch low-medium: 400 - 600 kcal.
typedef enum { curry_tuna_salad1, broccoli_n_feta_omelet1} lunch_low_med_kcal;

// lunch medium kcal: 600 - 800 kcal
typedef enum { peanut_butter_yogurt1, turkey_sandwiches1} lunch_med_kcal;

// lunch high_medium: 800 - 1000 kcal
typedef enum { ham_and_salami_rollups1, almond_mango_protein_shake1} lunch_high_med_kcal;


// lunch high kcal: 1000 - 1200 kcal.
typedef enum { apricot_jam_and_almond_butter_sandwich1, roast_beef_and_cheddar_sandwich1} lunch_high_kcal;

int lunch_meal(int consumption) {
    lunch_low_kcal l;
    lunch_low_med_kcal lm;
    lunch_med_kcal m;
    lunch_high_med_kcal hm;
    lunch_high_kcal h;

    srand(time(NULL));

    if (consumption <= 400) {
        l = (lunch_low_kcal)(rand() % 2);
        switch (l) {
            case cottage_cheese_and_raspberries1:
                printf("***  Cottage Cheese & Raspberries - 288 kcal  ***\n\n");
                cottage_cheese_and_raspberries();
                consumption -= 288;
                break;

            case cucumber_avocado_salad1:
                printf("***  Cucumber Avocado Salad - 275 kcal  ***\n\n");
                cucumber_avocado_salad();
                consumption -= 275;
                break;

        }
    } else if (consumption <= 600) {
        lm = (lunch_low_med_kcal)(rand() % 2);
        switch (lm) {
           
            case curry_tuna_salad1:
                printf("***  Curry Tuna Salad - 467 kcal ***\n\n");
                curry_tuna_salad();
                consumption -= 467;
                break;
            case broccoli_n_feta_omelet1: 
                printf("*** Broccoli and Feta Omelet with Toast -490 kcal *** \n\n");
                broccoli_n_feta_omelet();
                consumption -= 490;
                break;
        }

    } else if (consumption <= 800) {
        m = (lunch_med_kcal)(rand() % 2);
        switch (m) {
            case peanut_butter_yogurt1:
                printf("***  Peanut Butter yogurt - 687 kcal  ***\n\n");
                peanut_butter_yogurt();
                consumption -= 687;
                break;

            case turkey_sandwiches1:
                printf("***  Turkey Sandwiches with Cranberry Sauce and Blue "
                    "Cheese Butter - 720 kcal  ***\n\n");
                turkey_sandwiches();
                consumption -= 720;
                break;

           
        }
    } else if (consumption <= 1000) {
        hm = (lunch_high_med_kcal)(rand() %2);
        switch (hm) {

            case ham_and_salami_rollups1:
                printf("***  Ham and Salami Roll-ups - 914 kcal  ***\n\n");
                ham_and_salami_rollups();
                consumption -= 914;
                break;

            case almond_mango_protein_shake1:
                printf("*** Almond Mango Protein Shake -911 kcal ***\n\n");
                almond_mango_protein_shake();
                consumption -= 911;
                break;
        }


    } else {
        h = (lunch_high_kcal)(rand() % 2);
        switch (h) {
            
            case apricot_jam_and_almond_butter_sandwich1:
                apricot_jam_and_almond_butter_sandwich();
                consumption -= 1094;
                break;

            case roast_beef_and_cheddar_sandwich1:
                roast_beef_and_cheddar_sandwich();
                consumption -= 1076;
                break;
        }
    }

    return consumption;
}

void cottage_cheese_and_raspberries() {
    // https://www.eatthismuch.com/recipe/nutrition/cottage-cheese-raspberries,331981/

    printf("***  3 mins to prep, 0 mins to cook.  ***\n");
    printf("Required Ingredients:\n\n");

    printf("Cottage cheese: 1 1/2 cups/334 grams\n");
    printf("Raspberries: 3/4 cup/91 grams\n\n");
    printf(
        "Step 1: Combine cottage cheese and raspberries, serve and enjoy! "
        "\n\n");
}


void cucumber_avocado_salad() {
    // https://www.eatthismuch.com/recipe/nutrition/cucumber-avocado-salad,906191/

    printf("***  5 mins to prep, 0 mins to cook.  ***\n");
    printf(" Required Ingredients:\n\n");
    printf(" - 1 cup shredded/36 grams Lettuce\n");
    printf(" - Cherry Tomatoes: 8\n");
    printf(" - Cucumber: 1/4 cup slices\n");
    printf(" - Avocado: 1 fruit without skin and seed\n");
    printf(" - Red Bell Pepper: 3 rings (around 30 grams)\n");
    printf(" - Lemon Juice: 1 1/2 tbsp\n\n");
    printf(
        "Step 1:\n Chop all ingredients and toss together well. Drizzle "
        "with lemon juice and enjoy!\n\n");
}

void broccoli_n_feta_omelet() {
   // https://www.eatthismuch.com/recipe/nutrition/broccoli-feta-omelet-with-toast,1030012/

    printf("*** 5 mins to prep, 10 mins to cook. ***\n");
    printf(" Required Ingredients:\n\n");
    printf("- 1 1/4 spray Pam cooking spray\n");
    printf("1 1/4 cup/227 grams broccoli\n ");
    printf("2 7/17 extra large/138 grams egg\n");
    printf("1/8 cup, crumbled/23 grams feta cheese");
    printf(" 5/16 tsp dill weed");
    printf("2 7/16 Wheat bread");
    printf("Step 1: \n Heat a non-stick skillet over medium heat.");
    printf("Coat pan with cooking spray. Add broccoli, and cook 3 minutes.");
    printf("Step 2:\n Combine egg, feta, and dill in a small bowl. Add egg mixture to pan.");
    printf("Cook 3 to 4 minutes; flip omelet and cook 2 minutes or until cooked through. Serve with toast. ");

}

void curry_tuna_salad() {
    // https://www.eatthismuch.com/recipe/nutrition/curry-tuna-salad,906829/

    printf("***  7 mins to prep, 0 mins to cook.  ***\n");
    printf(" Required Ingredients: \n\n");

    printf(" - Tuna: 2 1/16 can\n");
    printf(" - Mayonnaise-like dressing: 4 1/8 tbsp\n");
    printf(" - Onions: 4 1/8 tbsp chopped\n");
    printf(" - Salt: 1 tsp\n");
    printf(" - Curry Powder: 1 tsp\n\n");

    printf("Step 1: Chop onions\n");
    printf("Step 2:Drain tuna\n");
    printf("Step 3: Add all ingredients together.\n");
    printf("Step 4: Serve on crispbread, bread, or alone. Enjoy!\n\n");
}

void peanut_butter_yogurt() {
    // https://www.eatthismuch.com/recipe/nutrition/peanut-butter-yogurt,412933/

    printf("***  2 mins to prep, 0 mins to cook.  ***\n");
    printf(" Required Ingredients: \n\n");

    printf(" - Nonfat greek yogurt: 2 cups\n");
    printf(" - Peanut butter: 4 tbsp\n");
    printf(" - Vanilla extract: 2 tsp\n\n");

    printf("Step 1: Combine ingredients and enjoy! \n\n");
}

void turkey_sandwiches() {
    // https://www.eatthismuch.com/recipe/nutrition/turkey-sandwiches-with-cranberry-sauce-and-blue-ch,57002/

    printf("***  10 mins to prep, 0 mins to cook.  ***\n");
    printf(" Required Ingredients: \n\n");

    printf(" - Blue cheese: 1 3/8 oz\n");
    printf(" - Cranberry sauce: 7/16 cup\n");
    printf(" - Sliced turkey: 4 1/8 slice rectangle\n");
    printf(" - Whole-wheat bread: 2 3/4 slice\n");
    printf(" - Butter: 11/16 tbsp\n");
    printf(" - Arugula: 1 3/8 cup/\n\n");

    printf(
        " Step 1: Set out butter and blue cheese and allow to soften to room "
        "temperature.\n");
    printf(
        " Step 2: Mash blue cheese with butter and 1/2 teaspoon pepper. Spread "
        "on bread "
        "and make sandwiches with turkey, cranberry sauce, and arugula. Enjoy! "
        "\n\n");
}

void ham_and_salami_rollups() {
    // https://www.eatthismuch.com/recipe/nutrition/ham-and-salami-roll-ups,905886/

    printf(" Required Ingredients: \n\n - 3 5/8 tbsp/54 grams Hummus\n");
    printf(" - 3 5/8 oz/101 grams Italian salami\n");
    printf(" - 3 5/8 oz/98 grams Roasted Red Peppers\n");
    printf(" - 3 5/8 small/119 grams Banana pepper\n");
    printf(" - 7 3/16 oz/204 grams Sliced ham\n");
    printf(
        " Steps: Stack ham, hummus, salami, and banana peppers. Roll up and "
        "enjoy!\n\n");
}

void almond_mango_protein_shake() {
// https://www.eatthismuch.com/recipe/nutrition/almond-mango-protein-shake,906854/

    printf("***  Almond Mango Protein Shake(911 calories)  ***\n\n");
    printf(" Required Ingredients: \n\n - 3 3/4 cup, sliced/619 grams Mango\n");
    printf(" - 3 scoop(30g)/90 grams Whey protein powder\n");
    printf(" - 3 cup/720 grams Almond milk\n");
    printf(
        " Steps: Combine all ingredients in a blender and pulse until smooth. "
        "Enjoy!\n\n");
}

void apricot_jam_and_almond_butter_sandwich() {
// https://www.eatthismuch.com/recipe/nutrition/apricot-jam-and-almond-butter-sandwich,907177/
    printf(
        "***  Apricot Jam and Almond Butter Sandwich(875 calories)  ***\n\n");
    printf(
        " Required Ingredients: \n\n - 7 1/2 slice regular/ 195 grams Multi-grain "
        "bread\n");
    printf(" - 3 3/4 tbsp/75 grams Jams and preserves\n");
    printf(" - 3 3/4 tbsp/60 grams Almond butter\n");
    printf(" Steps: Optionally toast the bread.\n");
    printf(
        " Step 2: Cover one slice with almond butter and the other slice with "
        "jam, put "
        "together and Enjoy! \n\n");
}

void roast_beef_and_cheddar_sandwich() {
// https://www.eatthismuch.com/recipe/nutrition/roast-beef-and-cheddar-sandwich,906002/

    printf("***  Roast Beef and Cheddar Sandwich(900 calories)  ***\n\n");
    printf(
        " Required Ingredients: \n\n - 4 13/16 slice/134 grams Whole-wheat bread\n");
    printf(" - 14 3/8 slices/323 grams Roast beef\n");
    printf(" - 2 3/8 slice(1 oz)/67 grams Cheddar cheese\n");
    printf(" - 2 3/8 tbsp/36 grams Dijon mustard\n");
    printf(
        " Steps: Spread mustard onto slices of bread. Top with roast beef "
        "and cheddar. Bring together slices to form a sandwich. Enjoy! \n\n");
}
