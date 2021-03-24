#include <stdio.h>
#include <stdlib.h>

int (*f)[100] = static_cast < int(*)[100]>(calloc(100, sizeof(int[100])));  //if you want a field bigger than 100x100 change this line

void meadow(const int sizeX, const int sizeY){

    int i, j;   //counters

//border top

    printf("%c", 201);

    i = 0;

    while(i < sizeX - 2){
        printf("%c", 205);
        i++;
    }

    printf("%c\n", 187);



    i = 1;
    j = 1;

    while(sizeY - j > 0){

        i = 1;

        printf("%c", 186);    //border left

        while(i < sizeX - 1){

            switch(f[i][sizeY - j]){    //switch [sizeY - j] with [j] to flip field vertically. switch [i] with [sizeX - i - 1] to flip field horizontally

                case 1: printf("%c", 254); break;   //change the ASCII code or add more cases
//              case 2: printf("%c", 254); break;
//              case 3: printf("%c", 254); break;

                default: printf(" "); break;

            }

            i++;
        }

        printf("%c\n", 186);    //border right

        j++;
    }


//border bottom

    printf("%c", 200);

    i = 0;

    while(i < sizeX - 2){
        printf("%c", 205);
        i++;
    }

    printf("%c\n", 188);



}

//in main call the function by using meadow(length of X axis, length of Y axis);
