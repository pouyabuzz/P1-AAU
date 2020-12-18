#include "Breakfast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHAR 2000
#define MAX_ROWS 20
#define NR_RECIPES 20

// recipes is from eatthismuch.com
// breakfast low kcal: 200 - 400 kcal,
// breakfast low-medium: 400 - 600 kcal.
// breakfast medium kcal: 600 - 800 kcal.
// breakfast high_medium: 800 - 1000 kcal.
// breakfast high kcal: 1000 - 1200 kcal.

struct recipes {
    int kcal;
    char name[MAX_CHAR];
    char time[MAX_CHAR];
    int nr_ing;
    char ingrediens[MAX_ROWS][MAX_CHAR];
    int nr_steps;
    char steps[MAX_ROWS][MAX_CHAR];
};

/* Chooses a recipe */
int breakfast_meal(int consumption) {
    /* Used for choosing a random number */
    srand(time(NULL));

    /* Random number is used to check a recipe in breakfast_recipes.txt */
    int j, i = (rand() % NR_RECIPES);
    struct recipes *recipes_array = read_file_breakfast();

    if (consumption <= 400) {
        do {
            /* Checks if recipe fulfils the requirements */
            if (recipes_array[i].kcal >= 200 && recipes_array[i].kcal <= 400) {
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal,
                       recipes_array[i].name, recipes_array[i].time);
                for (j = 0; j < recipes_array[i].nr_ing; j++) {
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for (j = 0; j < recipes_array[i].nr_steps; j++) {
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            } else {
                i = (rand() % NR_RECIPES);
            }
        } /* Loops while consumption is different from recipe's calorie value */
        while (consumption != recipes_array[i].kcal);

    } else if (consumption <= 600) {
        do {
            if (recipes_array[i].kcal >= 400 && recipes_array[i].kcal <= 600) {
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal,
                       recipes_array[i].name, recipes_array[i].time);
                for (j = 0; j < recipes_array[i].nr_ing; j++) {
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for (j = 0; j < recipes_array[i].nr_steps; j++) {
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            } else {
                i = (rand() % NR_RECIPES);
            }
        } while (consumption != recipes_array[i].kcal);

    } else if (consumption <= 800) {
        do {
            if (recipes_array[i].kcal >= 600 && recipes_array[i].kcal <= 800) {
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal,
                       recipes_array[i].name, recipes_array[i].time);
                for (j = 0; j < recipes_array[i].nr_ing; j++) {
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for (j = 0; j < recipes_array[i].nr_steps; j++) {
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            } else {
                i = (rand() % NR_RECIPES);
            }
        } while (consumption != recipes_array[i].kcal);

    } else if (consumption <= 1000) {
        do {
            if (recipes_array[i].kcal >= 800 && recipes_array[i].kcal <= 1000) {
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal,
                       recipes_array[i].name, recipes_array[i].time);
                for (j = 0; j < recipes_array[i].nr_ing; j++) {
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for (j = 0; j < recipes_array[i].nr_steps; j++) {
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            } else {
                i = (rand() % NR_RECIPES);
            }
        } while (consumption != recipes_array[i].kcal);

    } else {
        do {
            if (recipes_array[i].kcal >= 1000 &&
                recipes_array[i].kcal <= 1200) {
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal,
                       recipes_array[i].name, recipes_array[i].time);
                for (j = 0; j < recipes_array[i].nr_ing; j++) {
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for (j = 0; j < recipes_array[i].nr_steps; j++) {
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            } else {
                i = (rand() % NR_RECIPES);
            }
        } while (consumption != recipes_array[i].kcal);
    }
    /* Returns chosen recipe's calorie value */
    return consumption;
    /* Frees allocated memory from heap */
    free(recipes_array);
}

/* Scans recipes from txt-file into array of structs */
struct recipes *read_file_breakfast() {
    struct recipes *recipes_array = allocate_struct_breakfast();
    int i, j = 0;
    char line[2000];

    /* Opens txt-file with recipes */
    FILE *f = fopen("breakfast_recipes.txt", "r");
    if (f == NULL) {
        printf("File cannot open");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < NR_RECIPES; ++i) {
        fscanf(f, " @%d\n", &recipes_array[i].kcal);
        fscanf(f, " %[-.&A-Za-z ]\n", recipes_array[i].name);
        fscanf(f, " %[.,0-9A-Za-z ]\n", recipes_array[i].time);
        fscanf(f, " %d\n", &recipes_array[i].nr_ing);
        do {
            fgets(line, sizeof(line), f);
            strcpy(recipes_array[i].ingrediens[j], line);
            j++;

        } while (j < recipes_array[i].nr_ing);
        j = 0;
        fscanf(f, " %d\n", &recipes_array[i].nr_steps);
        do {
            fgets(line, sizeof(line), f);
            strcpy(recipes_array[i].steps[j], line);
            j++;

        } while (j < recipes_array[i].nr_steps);
        j = 0;
    }

    /* Closes txt-file */
    fclose(f);
    return recipes_array;
}

/* Allocates space in the heap for array of structs */
struct recipes *allocate_struct_breakfast() {
    struct recipes *recipes_array = malloc(NR_RECIPES * sizeof(struct recipes));
    if (recipes_array == NULL) {
        printf("There is not enough memory. Bye\n");
        exit(EXIT_FAILURE);
    }
    return recipes_array;
}