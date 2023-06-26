#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/time.h>
#include "num.h"

#ifdef D10
    #define MAX_NUM 10
#else
    #define MAX_NUM 6
#endif

int print_n(int num){

    if((num < 0) || (num > MAX_NUM)){

        return -1;
    }

    for(int j = 0; j < ASCII_ART_NUM_MAX_ROWS; j++){

        (MAX_NUM == D6) ?
            printf("%s\n", counter[num + D6_START] + j * ASCII_ART_NUM_MAX_COLS):
            printf("%s\n", counter[num] + j * ASCII_ART_NUM_MAX_COLS);
    }

    printf("\n\n");
    return 0;
}


int main(int argc, char** args) {

    char letter;
    int random_num = 0;
    int desired_number_of_randoms = 1;

    if(argc > 1){

        desired_number_of_randoms = strtol(args[1], NULL, 10);
    }

    /***********************/
    /*** Read User Input ***/
    /***********************/
    for(int i = 0; (letter = getchar()) != 'q';){

        /********************/
        /*** Clear Screen ***/
        /********************/
        system("clear");



        for(int j = 0; j < desired_number_of_randoms; j++){


            /******************************/
            /*** Generate Random Number ***/
            /******************************/
            struct timeval tv;
            gettimeofday(&tv, NULL);
            long long seed = tv.tv_usec;
            srand(seed);

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
    }

    return 0;
}

