#ifndef NUM_H
#define NUM_H

#define ASCII_ART_NUM_MAX_ROWS 11
#define ASCII_ART_NUM_MAX_COLS 50
#define MAX_NUM 6

char num1[][ASCII_ART_NUM_MAX_COLS] = {
"    ▄▄▄▄      ",
"  ▄█░░░░▌     ",  
" ▐░░▌▐░░▌     ",  
"  ▀▀ ▐░░▌     ", 
"     ▐░░▌     ",  
"     ▐░░▌     ", 
"     ▐░░▌     ", 
"     ▐░░▌     ",  
" ▄▄▄▄█░░█▄▄▄  ", 
"▐░░░░░░░░░░░▌ ", 
" ▀▀▀▀▀▀▀▀▀▀▀  "
};

char num2[][ASCII_ART_NUM_MAX_COLS] = {
" ▄▄▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀█░▌ ",  
"          ▐░▌ ", 
"          ▐░▌ ", 
" ▄▄▄▄▄▄▄▄▄█░▌ ", 
"▐░░░░░░░░░░░▌ ",  
"▐░█▀▀▀▀▀▀▀▀▀  ", 
"▐░█▄▄▄▄▄▄▄▄▄  ", 
"▐░░░░░░░░░░░▌ ", 
" ▀▀▀▀▀▀▀▀▀▀▀  ", 
};


char num3[][ASCII_ART_NUM_MAX_COLS] = {
" ▄▄▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀█░▌ ",
"          ▐░▌ ",
" ▄▄▄▄▄▄▄▄▄█░▌ ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀█░▌ ",
"          ▐░▌ ",
" ▄▄▄▄▄▄▄▄▄█░▌ ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀▀▀  ",
};

char num4[][ASCII_ART_NUM_MAX_COLS] = {
" ▄         ▄  ",
"▐░▌       ▐░▌ ",
"▐░▌       ▐░▌ ",
"▐░▌       ▐░▌ ",
"▐░█▄▄▄▄▄▄▄█░▌ ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀█░▌ ",
"          ▐░▌ ",
"          ▐░▌ ",
"          ▐░▌ ",
"           ▀  ",
};

char num5[][ASCII_ART_NUM_MAX_COLS] = {
" ▄▄▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
"▐░█▀▀▀▀▀▀▀▀▀  ",
"▐░█▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀█░▌ ",
"          ▐░▌ ",
"          ▐░▌ ",
" ▄▄▄▄▄▄▄▄▄█░▌ ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀▀▀  ",
};


char num6[][ASCII_ART_NUM_MAX_COLS] = {

" ▄▄▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
"▐░█▀▀▀▀▀▀▀▀▀  ",
"▐░▌           ",
"▐░█▄▄▄▄▄▄▄▄▄  ",
"▐░░░░░░░░░░░▌ ",
"▐░█▀▀▀▀▀▀▀█░▌ ",
"▐░▌       ▐░▌ ",
"▐░█▄▄▄▄▄▄▄█░▌ ",
"▐░░░░░░░░░░░▌ ",
" ▀▀▀▀▀▀▀▀▀▀▀  ",
};

char* counter[] = {
    (char*)num1, 
    (char*)num2,
    (char*)num3,
    (char*)num4,
    (char*)num5,
    (char*)num6,
};

#endif
