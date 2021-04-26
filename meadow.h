#include <stdio.h>
#include <stdlib.h>

int m[112][112];  //two-dimensional array that controls the location of the symbols

int ma1 = 254;   //first symbol
int ma2 = 178;   //second symbol
int ma3 = 47;    //third symbol
int ma4 = 48;    //fourth symbol
int ma5 = 43;    //fifth symbol

void meadow(int sizeX, int sizeY){

    int i, j;   //counters

    printf("%c", 201);  //border top left

    for(i = 0; i < sizeX; i++){printf("%c", 205);}  //border top middle

    printf("%c\n", 187);    //border top right

    for(j = 0; sizeY - j > 0; j++){

        printf("%c", 186);    //border left

        for(i = 1; i < sizeX + 1; i++){

            switch(m[i][sizeY - j]){    //switch [sizeY - j] with [j + 1] to flip field vertically. switch [i] with [sizeX - i - 1] to flip field horizontally

                case 1: printf("%c", ma1); break;
                case 2: printf("%c", ma2); break;
                case 3: printf("%c", ma3); break;
                case 4: printf("%c", ma4); break;
                case 5: printf("%c", ma5); break;

                default: printf(" "); break;

            }

        }

        printf("%c\n", 186);    //border right

    }

    printf("%c", 200);  //border bottom left

    for(i = 0; i < sizeX; i++){printf("%c", 205);}  //border bottom middle

    printf("%c\n", 188);    //border bottom right

}

void mclear(){for(int i = 0; i <= 112; i++){for(int j = 0; j <= 112; j++){m[i][j] = 0;}}}

void mfill(int fcoordx1, int fcoordy1, int fcoordx2, int fcoordy2, int material){

    if(fcoordx2 < fcoordx1){    //checking if x coordinates have been switched and fixing them
        int buffer = fcoordx1;
        fcoordx1 = fcoordx2;
        fcoordx2 = buffer;
    }

    if(fcoordy2 < fcoordy1){    //checking if y coordinates have been switched and fixing them
        int buffer = fcoordy1;
        fcoordy1 = fcoordy2;
        fcoordy2 = buffer;
    }

    for(int i = fcoordx1; i <= fcoordx2; i++){    //loop to fill the desired space
        for(int j = fcoordy1; j <= fcoordy2; j++){
            m[i][j] = material;
        }
    }

}
