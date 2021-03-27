#include <stdio.h>
#include <stdlib.h>

int (*m)[112] = static_cast < int(*)[112]>(calloc(112, sizeof(int[112])));  //two-dimensional array that controls the location of the symbols

int a1 = 254;   //first symbol
int a2 = 178;   //second symbol
int a3 = 47;    //third symbol
int a4 = 48;    //fourth symbol
int a5 = 43;    //sixth symbol

void meadow(const int sizeX, const int sizeY){

    int i, j;   //counters

    printf("%c", 201);  //border top left

    for(i = 0; i < sizeX; i++){printf("%c", 205);}  //border top middle

    printf("%c\n", 187);    //border top right



    for(j = 0; sizeY - j > 0; j++){

        printf("%c", 186);    //border left

        for(i = 1; i < sizeX + 1; i++){

            switch(m[i][sizeY - j]){    //switch [sizeY - j] with [j] to flip field vertically. switch [i] with [sizeX - i - 1] to flip field horizontally

                case 1: printf("%c", a1); break;
                case 2: printf("%c", a2); break;
                case 3: printf("%c", a3); break;
                case 4: printf("%c", a4); break;
                case 5: printf("%c", a5); break;

                default: printf(" "); break;

            }

        }

        printf("%c\n", 186);    //border right
    }



    printf("%c", 200);  //border bottom left

    for(i = 0; i < sizeX; i++){printf("%c", 205);}  //border bottom middle

    printf("%c\n", 188);    //border bottom right

}

