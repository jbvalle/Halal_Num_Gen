#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "num.h"


int print_n(int num){

    if((num < 0) || (num > 6)){

        return -1;
    }
        
    for(int j = 0; j < ASCII_ART_NUM_MAX_ROWS; j++){

        printf("%s\n", counter[num] + j * ASCII_ART_NUM_MAX_COLS);
    }

    return 0;
}


int main() {

    char letter;
    int random_num = 0;

    /***********************/
    /*** Read User Input ***/
    /***********************/
    for(int i = 0; (letter = getchar()) != 'q';){
    
        /********************/
        /*** Clear Screen ***/
        /********************/
        system("clear");

        /******************************/
        /*** Generate Random Number ***/
        /******************************/

        srand(time(NULL)); 

        random_num = (rand() % MAX_NUM);

        /**********************************************/
        /***1. Print Corresponding ASCII ART Number ***/
        /***2. Throw an error if wrong input        ***/
        /**********************************************/

        if(print_n(random_num) != 0){

            printf("\nERROR: Random Number out of Range!\n");
            return -1;
        }
    }
    
    return 0;
}

