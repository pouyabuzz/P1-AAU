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
void mealplan();

typedef enum {Toast, Wrap, Shrimp}
dinner_low_kcal;

typedef enum {Chorizo, Quesadilla, BBQ}
dinner_med_kcal;

typedef enum {Buffalo, Sausage, Beef}
dinner_high_kcal;


int main(void){

    srand(time(NULL));
    mealplan();

    return 0;
}

void mealplan(){
    dinner_low_kcal l;
    dinner_med_kcal m;
    dinner_high_kcal h;
    int x;

    l = (dinner_low_kcal) (rand() % 3);
    m = (dinner_med_kcal)(rand() % 3);
    h = (dinner_high_kcal)(rand() % 3);

    scanf("%d", &x);

    switch (x){
        case 1:
            printf(" Low-calorie recipes ranging between 200 - 500 kcal \n\n");
            switch (l) {
            case Toast :printf("***  Toast with Tomato and Hummus - 184 kcal  ***\n\n");
                        toast();
            break;

            case Wrap :printf("***  Chicken Wraps - 368 kcal  ***\n\n");
                       wrap(); 
            break;

            case Shrimp :printf("***  Pineapple Shrimp Salad - 339 kcal  ***\n\n");
                          shrimp();
            break;
        }
        break;

        case 2:
            printf(" Middle-calorie recipes ranging between 500 - 800 kcal \n\n");
            switch (m) {
            case Chorizo :printf("***  Cheesy Chorizo Chicken and Spinach - 571 kcal  ***\n\n");
                          chorizo();
            break;

            case Quesadilla :printf("***  Crispy Cheese Quesadilla - 733 kcal  ***\n\n");
                         quesadilla();   
            break;

            case BBQ :printf("***  BBQ Chicken Pita Pizza - 656 kcal  ***\n\n");
                          bbqq();  
            break;
        }
        break;
   
        case 3:
            printf(" High-calorie recipes ranging between 800 - 3000 kcal \n\n");
            switch (h) {
            case Buffalo :printf("***  Buffalo Chicken Salad - 1354 kcal  ***\n\n");
                        buffalo();
            break;

            case Sausage :printf("***  Smoked Sausage Skillet with Peppers and Farro - 1882 kcal  ***\n\n");
                          sausage();  
            break;

            case Beef :printf("***  Beef and Mushroom Stroganoff - 3008 kcal  ***\n\n");
                       beef(); 
            break;
        }
        break;
    }   
}

void toast(){
    //https://www.eatthismuch.com/recipe/nutrition/toast-with-tomato-and-hummus,906348/
    
    printf("***  5 mins to prep.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Whole-wheat bread: 1 slice \n");
    printf(" - Hummus: 1/4 cup\n");  
    printf(" - Tomatoes: 1 Italian tomato\n\n");
    printf(" - Toast bread to your liking. Spread with hummus, then top with sliced tomatoes.\n\n");
}

void wrap (){
    //https://www.eatthismuch.com/recipe/nutrition/chicken-wraps,905689/

    printf("***  10 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Chicken breast: 1/2 breast, bone and skin removed\n");
    printf(" - Lettuce (chopped): 2 leaf outer \n");
    printf(" - Parmesan cheese (grated): 1 tbsp\n");
    printf(" - Tomatoes: 1/2 medium whole\n");
    printf(" - Light mayonnaise: 1 tbsp\n");
    printf(" - Tortillas: 1 tortilla\n\n");

    printf("Step 1:\n Preheat oven to 400 degrees F.");
    printf("Place chicken on a foil lined pan and bake for");
    printf("about 15-20 minutes or until it is cooked through,");
    printf("no longer pink, and juices run clear. Chop up into");
    printf("bite sized pieces.\n");

    printf("Step 2:\n Place first 5 ingredients in large");
    printf("bowl and mix together well, until mayonnaise is evenly");
    printf("distributed. Spoon onto tortillas; roll up. Enjoy!\n\n");
}

void shrimp(){
    //https://www.eatthismuch.com/recipe/nutrition/pineapple-shrimp-salad,905882/

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

void chorizo (){
    //https://www.eatthismuch.com/recipe/nutrition/cheesy-chorizo-chicken-and-spinach,968797/
    
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

void quesadilla (){
    //https://www.eatthismuch.com/recipe/nutrition/crispy-cheese-quesadilla,905822/

    printf("***  5 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Pam coocking spray (Oil): 2 pray, about 1/3 second\n");
    printf(" - Cheddar cheese: 1 cup, shredded\n");
    printf(" - Tortillas: 2 tortilla\n\n");

    printf("Step 1: Preheat pan over medium. Spray with non-stick spray.\n");
    printf("Step 2: Put cheese on half of tortilla\n");
    printf("Step 3: Fold the uncovered half of the tortilla over top the");
    printf(" other half (like a sandwich).\n");
    printf("Step 4: Put in on pan, fry carefully, making sure to not burn tortilla.\n");
    printf("Step 5: Flip when bottom is crispy and cook until evenly golden brown. Enjoy!\n\n");
}

void bbqq (){
    //https://www.eatthismuch.com/recipe/nutrition/bbq-chicken-pita-pizza,950237/

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
    printf(" Add chicken and cook for 8-10 minutes per side or until cooked through");
    printf(" and no longer pink. Let rest 5 minutes before");
    printf("chopping into bite sized pieces. Set aside.\n");

    printf("Step 2: Slice pita bread so there are two large halves.\n");
    printf("Step 3: Grill or broil inside halves of the pita until they are lightly toasted.\n");
    printf("Step 4: On each half of the pita use 1 tbsp of BBQ sauce spread out like pizza\n");
    printf(" sauce. Pile on equal");
    printf(" portions of chicken, onions, peppers and cilantro.");
    printf(" Top with Equal portions of cheese.");
    printf(" Enjoy!\n\n");
}

void buffalo (){
    //https://www.eatthismuch.com/recipe/nutrition/buffalo-chicken-salad,921302/

    printf("***  10 mins to prep, 10 mins to cook  ***\n");
    printf("Required ingredients: \n - Lettuce: 2 heads\n");
    printf(" - Carrots: 1 cup grated\n");
    printf(" - Celery: 2 stalk, small (5 inch long)\n");
    printf(" - Ranch dressing: 1/2 Cup\n");
    printf(" - Blue cheese: 1/2 cup, crumbled, not packed\n");
    printf(" - Vegetable oil: 1 tbsp\n");
    printf(" - Butter: 2 tbsp\n");
    printf(" - Chicken breast: 1 breast, bone and skin removed\n");
    printf(" - Pepper or hot sauce: 4 tbsp\n");
    printf(" - Salt: 1 dash\n");
    printf(" - Pepper: 1 dash\n\n");
    
    printf("Step 1- Preheat a skillet over medium-high heat.\n");
    printf("Step 2- Combine chopped lettuce, carrots, and celery");
    printf("in a salad bowl. Combine ranch dressing and blue cheese crumbles in a small bowl.\n");
    printf("Step 3- Add oil and butter to hot pan with the chicken.");
    printf("Season with salt and pepper and sear for 2 or 3 minutes,");
    printf("then add hot sauce. Reduce heat a little and cook 5 minutes more,");
    printf("or until chicken is cooked through and no longer pink.\n");
    printf("Step 4- Toss salad with dressing and season with salt and pepper.");
    printf("Top salad with Buffalo chicken and serve. Enjoy!\n\n");
}

void sausage (){
    //https://www.eatthismuch.com/recipe/nutrition/smoked-sausage-skillet-with-peppers-and-farro,906657/

    printf("***  5 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Farro: 2 cup\n");
    printf(" - Onions: 1 medium\n");
    printf(" - Red bell pepper: 2 medium\n");
    printf(" - Sausage: 8 oz\n");
    printf(" - Olive oil: 1 tbsp\n");
    printf(" - Tomatoes: 1 can\n");
    printf(" - Oregano: 1/2 tsp, leaves\n");
    printf(" - Pepper: 10 dash\n");
    printf(" - Parsley: 3 sprig\n\n");

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

void beef (){
    //https://www.eatthismuch.com/recipe/nutrition/beef-and-mushroom-stroganoff,906635/

    printf("***  10 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Onions: 1 large\n");
    printf(" - Parsley: 1/4 cup\n");
    printf(" - Mushrooms: 3 cup diced\n");
    printf(" - Egg noodles: 8 oz\n");
    printf(" - Butter: 3 tbsp\n");
    printf(" - Beef tenderloin: 16 oz\n");
    printf(" - Vegetable Broth: 1 1/2 cup\n");
    printf(" - Sour cream: 1 1/2 cup\n");
    printf(" - Wheat flour: 3 tbsp\n\n");

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
    printf(" being sure to stir in any browned bits off the bottom of the pan.");
    printf(" Bring to a boil, and cook until the mixture has reduced by 1/3.");
    printf(" Reduce heat to low, and return the mushrooms and onion to the skillet.\n");
    printf("Step 5: Remove the pan from the heat, stir together the sour cream and flour;");
    printf(" then fold into the mushrooms. Return the skillet to the burner, and continue");
    printf(" cooking over low heat, just until the sauce thickens. Stir in the parsley,");
    printf(" and season to taste with salt and pepper.");
    printf(" Serve over cooked egg noodles. Enjoy!\n\n");
}



























