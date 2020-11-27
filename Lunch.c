#include "Lunch.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// recipes is from eatthismuch.com
// lunch low kcal: 200 - 500 kcal, lunch medium kcal: 500 - 800 kcal, lunch high
// kcal: 800 - 1500 kcal

void cottage_cheese_and_raspberries();
void cucumber_avocado_salad();
void curry_tuna_salad();
void peanut_butter_yogurt();
void turkey_sandwiches();
void ham_and_salami_rollups();
void almond_mango_protein_shake();
// https://www.eatthismuch.com/recipe/nutrition/almond-mango-protein-shake,906854/

void apricot_jam_and_almond_butter_sandwich();
// https://www.eatthismuch.com/recipe/nutrition/apricot-jam-and-almond-butter-sandwich,907177/

void roast_beef_and_cheddar_sandwich();
// https://www.eatthismuch.com/recipe/nutrition/roast-beef-and-cheddar-sandwich,906002/

typedef enum {
    cottage_cheese_and_raspberries1,
    cucumber_avocado_salad1,
    curry_tuna_salad1
} lunch_low_kcal;

typedef enum {
    peanut_butter_yogurt1,
    turkey_sandwiches1,
    ham_and_salami_rollups1
} lunch_med_kcal;

typedef enum {
    almond_mango_protein_shake1,
    apricot_jam_and_almond_butter_sandwich1,
    roast_beef_and_cheddar_sandwich1
} lunch_high_kcal;

int lunch_meal(int consumption) {
    lunch_low_kcal l;
    lunch_med_kcal m;
    lunch_high_kcal h;

    srand(time(NULL));

    if (consumption <= 500) {
        l = (lunch_low_kcal)(rand() % 3);
        switch (l) {
            case cottage_cheese_and_raspberries1:
                printf("***  Cottage Cheese & Raspberries - 195 kcal  ***\n\n");
                cottage_cheese_and_raspberries();
                consumption -= 195;
                break;

            case cucumber_avocado_salad1:
                printf("***  Cucumber Avocado Salad - 275 kcal  ***\n\n");
                cucumber_avocado_salad();
                consumption -= 275;
                break;

            case curry_tuna_salad1:
                printf("***  Curry Tuna Salad - 227 kcal ***\n\n");
                curry_tuna_salad();
                consumption -= 227;
                break;
        }
    } else if (consumption <= 1200) {
        m = (lunch_med_kcal)(rand() % 3);
        switch (m) {
            case peanut_butter_yogurt1:
                printf("***  Peanut Butter yogurt - 345 kcal  ***\n\n");
                peanut_butter_yogurt();
                consumption -= 345;
                break;

            case turkey_sandwiches1:
                printf(
                    "***  Turkey Sandwiches with Cranberry Sauce and Blue "
                    "Cheese Butter - 524 kcal  ***\n\n");
                turkey_sandwiches();
                consumption -= 524;
                break;

            case ham_and_salami_rollups1:
                printf("***  Ham and Salami Roll-ups - 509 kcal  ***\n\n");
                ham_and_salami_rollups();
                consumption -= 509;
                break;
        }

    } else {
        h = (lunch_high_kcal)(rand() % 3);
        switch (h) {
            case almond_mango_protein_shake1:
                almond_mango_protein_shake();
                consumption -= 911;
                break;

            case apricot_jam_and_almond_butter_sandwich1:
                apricot_jam_and_almond_butter_sandwich();
                consumption -= 875;
                break;

            case roast_beef_and_cheddar_sandwich1:
                roast_beef_and_cheddar_sandwich();
                consumption -= 900;
                break;
        }
    }

    return consumption;
}

void cottage_cheese_and_raspberries() {
    // https://www.eatthismuch.com/recipe/nutrition/cottage-cheese-raspberries,331981/

    printf("***  3 mins to prep, 0 mins to cook.  ***\n");
    printf("Required Ingredients:\n\n");

    printf("Cottage cheese: 2 cups/452 grams\n");
    printf("Raspberries: 1 cup/123 grams\n\n");
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

void curry_tuna_salad() {
    // https://www.eatthismuch.com/recipe/nutrition/curry-tuna-salad,906829/

    printf("***  7 mins to prep, 0 mins to cook.  ***\n");
    printf(" Required Ingredients: \n\n");

    printf(" - Tuna: 1 can\n");
    printf(" - Mayonnaise-like dressing: 2 tbsp\n");
    printf(" - Onions: 2 tbsp chopped\n");
    printf(" - Salt: 1/2 tsp\n");
    printf(" - Curry Powder: 1/2 tsp\n\n");

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

    printf(" - Blue cheese: 1 oz\n");
    printf(" - Cranberry sauce: 1/3 cup\n");
    printf(" - Sliced turkey: 3 slice rectangle\n");
    printf(" - Whole-wheat bread: 2 slice\n");
    printf(" - Butter: 1/2 tbsp\n");
    printf(" - Arugula: 1 cup/\n\n");

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

    printf(" Required Ingredients: \n\n - 2 tbsp/30 grams Hummus\n");
    printf(" - 2 oz/56 grams Italian salami\n");
    printf(" - 2 oz/54.5 grams Roasted Red Peppers\n");
    printf(" - 2 small/66 grams Banana pepper\n");
    printf(" - 4 oz/113 grams Sliced ham\n");
    printf(
        " Steps: Stack ham, hummus, salami, and banana peppers. Roll up and "
        "enjoy!\n\n");
}

void almond_mango_protein_shake() {
    printf("***  Almond Mango Protein Shake(911 calories)  ***\n\n");
    printf(" Required Ingredients: \n\n - 3 3/4 cup, sliced/619 grams Mango\n");
    printf(" - 3 scoop(30g)/90 grams Whey protein powder\n");
    printf(" - 3 cup/720 grams Almond milk\n");
    printf(
        " Steps: Combine all ingredients in a blender and pulse until smooth. "
        "Enjoy!\n\n");
}

void apricot_jam_and_almond_butter_sandwich() {
    printf(
        "***  Apricot Jam and Almond Butter Sandwich(875 calories)  ***\n\n");
    printf(
        " Required Ingredients: \n\n - 6 slice regular/ 156 grams Multi-grain "
        "bread\n");
    printf(" - 3tbsp/60 grams Jams and preserves\n");
    printf(" - 3 tbsp/48 grams Almond butter\n");
    printf(" Steps: Optionally toast the bread.\n");
    printf(
        " Step 2: Cover one slice with almond butter and the other slice with "
        "jam, put "
        "together and Enjoy! \n\n");
}

void roast_beef_and_cheddar_sandwich() {
    printf("***  Roast Beef and Cheddar Sandwich(900 calories)  ***\n\n");
    printf(
        " Required Ingredients: \n\n - 4 slice/112 grams Whole-wheat bread\n");
    printf(" - 12 slices/270 grams Roast beef\n");
    printf(" - 2 slice(1 oz)/56 grams Cheddar cheese\n");
    printf(" - 2 tbsp/30 grams Dijon mustard\n");
    printf(
        " Steps: Spread mustard onto slices of bread. Top with roast beef "
        "and cheddar. Bring together slices to form a sandwich. Enjoy! \n\n");
}
