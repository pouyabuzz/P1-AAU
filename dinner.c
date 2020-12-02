#include "Dinner.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void toast();
void wrap();
void chorizo();
void shrimp();
void quesadilla();
void sausage();
void buffalo();
void bbqq();
void beef();
void tuna();
void mealplan();

typedef enum {Toast, Shrimp} dinner_low_kcal;

typedef enum {Chorizo, Buffalo} dinner_low_med_kcal;

typedef enum {Quesadilla, Wrap} dinner_med_kcal;

typedef enum {Sausage, BBQ} dinner_high_med_kcal;

typedef enum {Beef, Tuna} dinner_high_kcal;

// recipes is from eatthismuch.com
// lunch low kcal: 200 - 400 kcal,
// lunch low-medium: 400 - 600 kcal.
// lunch medium kcal: 600 - 800 kcal.
// lunch high_medium: 800 - 1000 kcal.
// lunch high kcal: 1000 - 1200 kcal.

int dinner_meal(int consumption) {
    
    dinner_low_kcal l;
    dinner_low_med_kcal lm;
    dinner_med_kcal m;
    dinner_high_med_kcal hm;
    dinner_high_kcal h;

    srand(time(NULL));

    if (consumption <= 400) {
        l = (dinner_low_kcal)(rand() % 2);
        switch (l) {
            case Toast:
                printf("***  Toast with Tomato and Hummus - 368 kcal  ***\n\n");
                toast();
                consumption -= 368;
                break;

            case Shrimp:
                printf("***  Pineapple Shrimp Salad - 339 kcal  ***\n\n");
                shrimp();
                consumption -= 339;
                break;
        }
    }

    else if(consumption <= 600){
        lm = (dinner_low_med_kcal)(rand() % 2);
        switch(lm) {
            case Chorizo:
                    printf("***  Cheesy Chorizo Chicken and Spinach - 571 kcal  ""***\n\n");
                    chorizo();
                    consumption -= 571;
                    break;

            case Buffalo:
                    printf("***  Buffalo Chicken Salad - 529 kcal  ***\n\n");
                    buffalo();
                    consumption -= 529;
                    break;
        }
    } 

    else if (consumption <= 800) {
        m = (dinner_med_kcal)(rand() % 2);
        switch (m) {
            

            case Quesadilla:
                printf("***  Crispy Cheese Quesadilla - 733 kcal  ***\n\n");
                quesadilla();
                consumption -= 733;
                break;

            case Wrap:
                printf("***  Chicken Wraps - 736 kcal  ***\n\n");
                wrap();
                consumption -= 736;
                break;
        }
    } 

    else if (consumption <= 1000) {
        hm = (dinner_high_med_kcal)(rand() % 2);
        switch (hm) {

            case Sausage:
                printf(
                    "***  Smoked Sausage Skillet with Peppers and Farro - 941 "
                    "kcal  ***\n\n");
                sausage();
                consumption -= 941;
                break;

            case BBQ:
                printf("***  BBQ Chicken Pita Pizza - 982 kcal  ***\n\n");
                bbqq();
                consumption -= 982;
                break;
        }
    }

    else {
        h = (dinner_high_kcal)(rand() % 2);
        switch (h){
            case Beef:
                printf("***  Beef and Mushroom Stroganoff - 1161 kcal  ***\n\n");
                beef();
                consumption -= 1161;
                break;

            case Tuna:
                printf("***  Pasta with Tuna and Tomato Sauce - 1146 kcal  ***\n\n");
                tuna();
                consumption -= 1146;
                break;
        }
    }

    return consumption;
}

void toast() {
    // https://www.eatthismuch.com/recipe/nutrition/toast-with-tomato-and-hummus,906348/

    printf("***  5 mins to prep.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Whole-wheat bread: 2 slice \n");
    printf(" - Hummus: 1/2 cup\n");
    printf(" - Tomatoes: 2 Italian tomato\n\n");
    printf(
        "Step 1:\n Toast bread to your liking. Spread with hummus, then top "
        "with sliced tomatoes.\n\n");
}

void wrap() {
    // https://www.eatthismuch.com/recipe/nutrition/chicken-wraps,905689/

    printf("***  10 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Chicken breast: 1 breast, bone and skin removed\n");
    printf(" - Lettuce (chopped): 4 leaf outer \n");
    printf(" - Parmesan cheese (grated): 2 tbsp\n");
    printf(" - Tomatoes: 1 medium whole\n");
    printf(" - Light mayonnaise: 2 tbsp\n");
    printf(" - Tortillas: 2 tortilla\n\n");

    printf("Step 1:\n Preheat oven to 400 degrees F.");
    printf("Place chicken on a foil lined pan and bake for");
    printf("about 15-20 minutes or until it is cooked through,");
    printf("no longer pink, and juices run clear. Chop up into");
    printf("bite sized pieces.\n");

    printf("Step 2:\n Place first 5 ingredients in large");
    printf("bowl and mix together well, until mayonnaise is evenly");
    printf("distributed. Spoon onto tortillas; roll up. Enjoy!\n\n");
}

void shrimp() {
    // https://www.eatthismuch.com/recipe/nutrition/pineapple-shrimp-salad,905882/

    printf("***  10 mins to prep, 7 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");
    printf(" - Shrimp: 4 oz\n");
    printf(" - Olice oil: 1/2 tbsp\n");
    printf(" - Onions: 1/2 small\n");
    printf(" - Pineappel 1/2 cup, chunks\n");
    printf(" - Red bell pepper: 1/2 small\n");
    printf(" - Avocados: 1/2 fruit, without skin and seed\n");
    printf(" - Lime juice: 1 lime tields\n");
    printf(" - Lettuce: 1 cup shredded\n\n");

    printf("Step 1: Cook the shrimp with olive oil,");
    printf("salt and pepper over medium");
    printf("heat until bright pink and cooked through.\n");

    printf("Step 2: Toss together with remaining ingredients and enjoy!\n\n");
}

void chorizo() {
    // https://www.eatthismuch.com/recipe/nutrition/cheesy-chorizo-chicken-and-spinach,968797/

    printf("***  10 mins to prep, 15 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Coconut oil: 1 tsp\n");
    printf(" - Onions: 1/4 medium\n");
    printf(" - Pork and beef chorizo: 1 1/2 oz\n");
    printf(" - Chicken breast: 4 oz\n");
    printf(" - Salt: 1 dash\n");
    printf(" - Pepper: 1 dash\n");
    printf(" - Cherry tomatoes: 4 cherry tomato\n");
    printf(" - Spinah: 1/2 cup\n");
    printf(" - Mozzarella cheese: 1/4 cup, diced\n");
    printf(" - Pine nuts: 1 tbsp\n\n");

    printf("Step 1: Heat the coconut oil in a large");
    printf("frying pan over a medium-high heat.");
    printf("Add the chorizo and fry for 1-2 minutes.");
    printf("Add the onion and fry for another 1-2 minutes.\n");

    printf("Step 2: Increase the heat to high and add the chicken,");
    printf("along with a generous pinch of both salt and pepper.");
    printf("Stir-fry for about 3-5 minutes,");
    printf("by which time the chicken should be almost");
    printf("completely cooked through.\n");

    printf("Step 3: Throw in the cherry tomatoes and cook");
    printf("for a minute or until they just begin to collapse.");
    printf("Toss in the spinach and stir through until fully wilted.\n");

    printf("Step 4: Use a wooden spoon to make little pockets");
    printf("in the chicken and vegetable mixture, then drop in small");
    printf("chunks of the mozzarella.");
    printf("Turn off the heat and let the mozzarella melt before");
    printf("spooning onto a plate and topping with pine nuts. Enjoy!\n\n");
}

void quesadilla() {
    // https://www.eatthismuch.com/recipe/nutrition/crispy-cheese-quesadilla,905822/

    printf("***  5 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Pam coocking spray (Oil): 2 spray, about 1/3 second\n");
    printf(" - Cheddar cheese: 1 cup, shredded\n");
    printf(" - Tortillas: 2 tortilla\n\n");

    printf("Step 1: Preheat pan over medium. Spray with non-stick spray.\n");
    printf("Step 2: Put cheese on half of tortilla\n");
    printf("Step 3: Fold the uncovered half of the tortilla over top the");
    printf(" other half (like a sandwich).\n");
    printf(
        "Step 4: Put in on pan, fry carefully, making sure to not burn "
        "tortilla.\n");
    printf(
        "Step 5: Flip when bottom is crispy and cook until evenly golden "
        "brown. Enjoy!\n\n");
}

void bbqq() {
    // https://www.eatthismuch.com/recipe/nutrition/bbq-chicken-pita-pizza,950237/

    printf("***  15 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Olive oil: 1 tbsp\n");
    printf(" - Chicken breast: 1 breast fillet\n");
    printf(" - Pita bread: 1 pita, large\n");
    printf(" - Barbecue sauce: 2 tbsp\n");
    printf(" - Red Onion: 1/2 cup chopped\n");
    printf(" - Yellow peppers: 1/2 pepper, large\n");
    printf(" - Monterey cheese: 1 oz\n");
    printf(" - Fresh cilantro: 1 tbsp\n");

    printf("Step 1: Heat oil in a pan over medium-high heat.");
    printf(
        " Add chicken and cook for 8-10 minutes per side or until cooked "
        "through");
    printf(" and no longer pink. Let rest 5 minutes before");
    printf("chopping into bite sized pieces. Set aside.\n");

    printf("Step 2: Slice pita bread so there are two large halves.\n");
    printf(
        "Step 3: Grill or broil inside halves of the pita until they are "
        "lightly toasted.\n");
    printf(
        "Step 4: On each half of the pita use 1 tbsp of BBQ sauce spread out "
        "like pizza\n");
    printf(" sauce. Pile on equal");
    printf(" portions of chicken, onions, peppers and cilantro.");
    printf(" Top with Equal portions of cheese.");
    printf(" Enjoy!\n\n");
}

void buffalo() {
    // https://www.eatthismuch.com/recipe/nutrition/buffalo-chicken-salad,921302/

    printf("***  10 mins to prep, 10 mins to cook  ***\n");
    printf("Required ingredients: \n - Lettuce: 3/4 heads\n");
    printf(" - Carrots: 3/8 cup grated\n");
    printf(" - Celery: 3/4 stalk, small (5 inch long)\n");
    printf(" - Ranch dressing: 3 1/8 Cup\n");
    printf(" - Blue cheese: 3/16 cup, crumbled, not packed\n");
    printf(" - Vegetable oil: 3/8 tbsp\n");
    printf(" - Butter: 3/4 tbsp\n");
    printf(" - Chicken breast: 3/8 breast, bone and skin removed\n");
    printf(" - Pepper or hot sauce: 2 tbsp\n");
    printf(" - Salt: 3/8 dash\n");
    printf(" - Pepper: 3/8 dash\n\n");

    printf("Step 1- Preheat a skillet over medium-high heat.\n");
    printf("Step 2- Combine chopped lettuce, carrots, and celery");
    printf(
        "in a salad bowl. Combine ranch dressing and blue cheese crumbles in a "
        "small bowl.\n");
    printf("Step 3- Add oil and butter to hot pan with the chicken.");
    printf("Season with salt and pepper and sear for 2 or 3 minutes,");
    printf("then add hot sauce. Reduce heat a little and cook 5 minutes more,");
    printf("or until chicken is cooked through and no longer pink.\n");
    printf("Step 4- Toss salad with dressing and season with salt and pepper.");
    printf("Top salad with Buffalo chicken and serve. Enjoy!\n\n");
}

void sausage() {
    // https://www.eatthismuch.com/recipe/nutrition/smoked-sausage-skillet-with-peppers-and-farro,906657/

    printf("***  5 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Farro: 1 cup\n");
    printf(" - Onions: 1/2 medium\n");
    printf(" - Red bell pepper: 1 medium\n");
    printf(" - Sausage: 4 oz\n");
    printf(" - Olive oil: 1/2 tbsp\n");
    printf(" - Tomatoes: 1/2 can\n");
    printf(" - Oregano: 1/4 tsp, leaves\n");
    printf(" - Pepper: 5 dash\n");
    printf(" - Parsley: 1 1/2 sprig\n\n");

    printf("Step 1: Prepare farro as per package directions.\n");
    printf("Step 2: Thinly slice the onions and bell peppers.");
    printf("Slice the smoked sausage into ¼” thick medallions.\n");
    printf("Step 3: Heat the olive oil in a large skillet over medium heat.");
    printf(" Add the sliced sausage and");
    printf(" sauté until browned. Drain off the excess fat.\n");
    printf("Step 4: Add the sliced onions and bell peppers to");
    printf(" the skillet. Continue to sauté");
    printf(" until the onions are soft and transparent.\n");
    printf("Step 5: Add the diced tomatoes (with juices), oregano,");
    printf(" some freshly cracked pepper, and the cooked farro. Stir");
    printf(" until evenly combined and allow to heat through (5-7 minutes).");
    printf(" Taste and adjust the salt if needed.");
    printf(" Garnish with parsley and serve! Enjoy!\n\n");
}

void beef() {
    // https://www.eatthismuch.com/recipe/nutrition/beef-and-mushroom-stroganoff,906635/

    printf("***  10 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Onions: 3/8 large\n");
    printf(" - Parsley:  1 1/2 tbsp \n");
    printf(" - Mushrooms: 1 3/16 cup diced\n");
    printf(" - Egg noodles: 3 1/16 oz\n");
    printf(" - Butter: 1 3/16 tbsp\n");
    printf(" - Beef tenderloin: 6 3/16 oz\n");
    printf(" - Vegetable Broth: 9/16/8 cup\n");
    printf(" - Sour cream: 9/16 cup\n");
    printf(" - Wheat flour: 1 3/16 tbsp\n\n");

    printf("Step 1: Coarsely chop onion and parsley. Slice mushrooms evenly.\n");
    printf("Step 2: Bring a large pot of lightly salted water to a boil.");
    printf(" Add egg noodles,");
    printf(" and cook until al dente, about 7 minutes.");
    printf(" Remove from heat, drain, and set aside.\n");
    printf("Step 3: At the same time, melt butter in a");
    printf(" large heavy skillet over medium heat.");
    printf(" Cook the beef. Add onion, and cook until softened.");
    printf(" Turn the heat up to medium-high, and add sliced mushrooms.");
    printf(" Cook until the mushrooms are limp and browned.");
    printf(" Remove to a bowl, and set aside.\n");
    printf("Step 4: In the same skillet, stir in vegetable broth,");
    printf(
        " being sure to stir in any browned bits off the bottom of the pan.");
    printf(" Bring to a boil, and cook until the mixture has reduced by 1/3.");
    printf(
        " Reduce heat to low, and return the mushrooms and onion to the "
        "skillet.\n");
    printf(
        "Step 5: Remove the pan from the heat, stir together the sour cream "
        "and flour;");
    printf(
        " then fold into the mushrooms. Return the skillet to the burner, and "
        "continue");
    printf(
        " cooking over low heat, just until the sauce thickens. Stir in the "
        "parsley,");
    printf(" and season to taste with salt and pepper.");
    printf(" Serve over cooked egg noodles. Enjoy!\n\n");
}

void tuna (){
    //*https://www.eatthismuch.com/recipe/nutrition/pasta-with-tuna-and-tomato-sauce,57155/*//
    
    printf("***  5 mins to prep, 35 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Pasta: 170 g\n");
    printf(" - Tomatoes: 3/4 can \n");
    printf(" - Butter: 1 1/2 tbsp\n");
    printf(" - Parmesan cheese: 3 3/4 tbsp\n");
    printf(" - Tuna: 2 1/4 oz\n");
    printf(" - Ricotta cheese: 3/16 cup\n");
    printf(" - Salt: 3/8 dash\n");
    printf(" - Basil: 1/16 cup leaves, whole\n");

    printf("Step 1: Chop or tear fresh basil.\n");
    printf("Step 2: Melt the butter in a medium pot on medium heat and add the can");
    printf(" of tomatoes, including the juice. If you are using whole canned ");
    printf("tomatoes (or fresh ones) crush them with your (clean)");
    printf(" fingers as you put them in the pot. Simmer gently, partially covered,");
    printf(" for 30 minutes.\n");
    printf("Step 3: Once the sauce is cooking, heat a large pot of well salted");
    printf(" water to a strong boil. Add the shell pasta to the boiling");
    printf(" water and cook at a vigorous boil, uncovered, until al dente,");
    printf(" cooked through but still a bit firm to the bite, which is");
    printf(" usually whatever the time specified on the pasta package");
    printf(" minus about 2 minutes. Drain and set aside.\n");
    printf("Step 4: Pour off the excess oil from the tuna can and stir the tuna");
    printf(" into the tomato sauce. Add the ricotta cheese, and add salt");
    printf(" to taste. Turn off the heat. Mix the sauce with the pasta in a");
    printf(" large bowl. Mix in the basil.\n");
    printf("Step 5: Pour the pasta into a 2 to 3-quart casserole dish and top");
    printf(" with the parmesan cheese. Put under a hot broiler for 4-6");
    printf(" minutes, until the cheese is melted and lightly browned.");
    printf(" Serve hot. Enjoy!\n\n");

}