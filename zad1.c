#include <stdio.h>
#include <string.h>

int main(){
    int guests;
    scanf("%d", &guests);

    //nuzni kolichestva, 1 masa-8 choveka
    int need_tables=(guests+7)/8;

    //stol 
    int need_chairs=guests;

    //komplekt s chashi-6 chashi
    int need_cups=(guests+5)/6;

    //komplekt chinii-6 chinii s pribori
    int need_dishes=(guests+5)/6;


    //broim kupeni neshta
    int bought_tables=0;
    int bought_chairs=0;
    int bought_cups=0;
    int bought_dishes=0;

    char item[20];
    while(1){
        scanf("%s", item);

        if (strcmp(item,"PARTY!")==0){
            break;
        }

        if(strcmp(item,"Table")==0){
            bought_tables++;
        }
        else if(strcmp(item,"Chair")==0){
            bought_chairs++;
        }
        else if(strcmp(item,"Cups")==0){
            bought_cups++;
        }
        else if(strcmp(item,"Dishes")==0){
            bought_dishes++;
        }
    }

    //pari poh
    double spent=bought_tables*42.00 + bought_chairs*13.99+bought_cups*5.98 + bought_dishes*21.02;

    //kolko oshte trqbva da kupi
    int left_tables=need_tables - bought_tables;
    int left_chairs=need_chairs-bought_chairs;
    int left_cups=need_cups-bought_cups;
    int left_dishes=need_dishes-bought_dishes;

    if(left_tables<0){
        left_tables=0;
    }
    if(left_chairs<0){
        left_chairs=0;
    }
    if(left_cups<0){
        left_cups=0;
    }
    if(left_dishes<0){
        left_dishes=0;
    }

    printf("%.2f\n",spent);
    if(left_tables>0){
        printf("%d Table\n", left_tables);
    }
    if(left_tables>0){
        printf("%d Chairs\n", left_chairs);
    }
    if(left_cups>0){
        printf("%d Cups\n",left_cups);
    }
    if(left_dishes>0){
        printf("%d Dishes\n", left_dishes);
    }

    return 0;

}