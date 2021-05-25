#include <stdio.h>

int m[112][112];  //two-dimensional array that controls the location of the symbols

void meadow(int sizeX, int sizeY){

    printf("%c", 201);  for(int i = 0; i < sizeX; i++){printf("%c", 205);}  printf("%c\n", 187);    //top border

    for(int j = 0; sizeY - j > 0; j++){    //for loop to go through all columns

        printf("%c", 186);    //left border

        for(int i = 1; i < sizeX + 1; i++){    //for loop to go through all rows

            if(m[i][j + 1] == 0){   //0 is not space in ASCII so we have to change it

                printf(" ");
                continue;   //continuing so we don't go through printing a symbol too

            }

            printf("%c", m[i][j + 1]);  //printing the desired symbol, pointed out by the user

        }

        printf("%c\n", 186);    //right border

    }

    printf("%c", 200);  for(int i = 0; i < sizeX; i++){printf("%c", 205);}  printf("%c\n", 188);    //bottom border

}