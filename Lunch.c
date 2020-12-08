#include "Lunch.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_char 2000
#define MAX_ING  20
#define NR_RECIPES 11

// recipes is from eatthismuch.com
// lunch low kcal: 200 - 400 kcal,
// lunch low-medium: 400 - 600 kcal.
// lunch medium kcal: 600 - 800 kcal.
// lunch high_medium: 800 - 1000 kcal.
// lunch high kcal: 1000 - 1200 kcal.

/*struct recipes *read_file();
struct recipes *allocate_struct();
int lunch_meal(int consumption);*/

struct recipes {
    int kcal;
    char name[MAX_char];
    char time[MAX_char];
    int nr_ing;
    char ingrediens[MAX_ING][MAX_char];
    int nr_steps;
    char steps[MAX_char][MAX_char];
};

/*int main(void){
    int a;
    printf("consumption: ");
    scanf("%d", &a);
    lunch_meal(a);
}*/

int lunch_meal(int consumption){
    srand(time(NULL));
    int j, i = (rand() % NR_RECIPES);
    struct recipes *recipes_array = read_file_lunch();

    if (consumption <= 400){
       do{
            if(recipes_array[i].kcal >= 200 && recipes_array[i].kcal <= 400){
                
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal, recipes_array[i].name, recipes_array[i].time);
                for(j = 0; j < recipes_array[i].nr_ing; j++){
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for(j = 0; j < recipes_array[i].nr_steps; j++){
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
            }else{
                i = (rand() % NR_RECIPES);
            }
       }while(!(consumption == recipes_array[i].kcal));

    }else if(consumption <= 600){
        do{
            if(recipes_array[i].kcal > 400 && recipes_array[i].kcal <= 600){
                
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal, recipes_array[i].name, recipes_array[i].time);
                for(j = 0; j < recipes_array[i].nr_ing; j++){
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for(j = 0; j < recipes_array[i].nr_steps; j++){
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
               }else{
                   i = (rand() % NR_RECIPES);
               }
       }while(!(consumption == recipes_array[i].kcal));

    }else if(consumption <= 800){
        do{
            if(recipes_array[i].kcal > 600 && recipes_array[i].kcal <= 800){
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal, recipes_array[i].name, recipes_array[i].time);
                for(j = 0; j < recipes_array[i].nr_ing; j++){
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for(j = 0; j < recipes_array[i].nr_steps; j++){
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
               }else{
                   i = (rand() % NR_RECIPES);
               }
       }while(!(consumption == recipes_array[i].kcal));

    }else if(consumption <= 1000){
        do{
            if(recipes_array[i].kcal > 800 && recipes_array[i].kcal <= 1000){
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal, recipes_array[i].name, recipes_array[i].time);
                for(j = 0; j < recipes_array[i].nr_ing; j++){
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for(j = 0; j < recipes_array[i].nr_steps; j++){
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
                }else{
                   i = (rand() % NR_RECIPES);
                }
       }while(!(consumption == recipes_array[i].kcal));

    }else {
         do{
             printf("%d", i);
            if(recipes_array[i].kcal > 1000){
                printf("Kcal: %d\n%s\n%s\n", recipes_array[i].kcal, recipes_array[i].name, recipes_array[i].time);
                for(j = 0; j < recipes_array[i].nr_ing; j++){
                    printf("%s", recipes_array[i].ingrediens[j]);
                }
                for(j = 0; j < recipes_array[i].nr_steps; j++){
                    printf("%s", recipes_array[i].steps[j]);
                }
                printf("\n");
                consumption = recipes_array[i].kcal;
                }else{
                    i = (rand() % NR_RECIPES);
                }
       }while(!(consumption == recipes_array[i].kcal));
    } 
    return consumption;
    free(allocate_struct_lunch);
}

struct recipes *read_file_lunch(){
    struct recipes *recipes_array = allocate_struct_lunch();
    int i, j = 0;
    char line[2000];

    FILE *f = fopen("lunch_recipes.txt", "r");
    if(f == NULL){
        printf("File cannot open");
        exit(EXIT_FAILURE);
    }
 
    for(i = 0; i < NR_RECIPES; ++i){
        fscanf(f, " @%d\n", &recipes_array[i].kcal);
        fscanf(f, " %[-.&A-Za-z ]\n", recipes_array[i].name);
        fscanf(f, " %[.,0-9A-Za-z ]\n", recipes_array[i].time);
        fscanf(f, " %d\n", &recipes_array[i].nr_ing);
        do{
            fgets(line, sizeof(line), f);
            strcpy(recipes_array[i].ingrediens[j], line);
            j++;
            
        } while(j < recipes_array[i].nr_ing);
        j = 0;
        fscanf(f, " %d\n", &recipes_array[i].nr_steps);
        do{
            fgets(line, sizeof(line), f);
            strcpy(recipes_array[i].steps[j], line);
            j++;
            
        } while(j < recipes_array[i].nr_steps);
        j = 0;
    }

  fclose(f);
  return recipes_array;
}

struct recipes *allocate_struct_lunch(){
    struct recipes *recipes_array = malloc(20 * sizeof(struct recipes));
    if(recipes_array == NULL){
        printf("kan ikke allokere nok hukommelse. Farvel\n");
        exit(EXIT_FAILURE);
    }
    return recipes_array;
}
