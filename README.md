# Meadow Library 6.0
 A C and C++ library that will create a fully functioning field that will allow you to print symbols at a specific location.

 Hello! In this file you will find more information on the meadow.h library(version 6.0). It makes creating a game, graph or etc in C and C++ so much easier.

 Using the library is simple:

 1. Download the meadowc.h or meadowcpp.h file from this repository(depending on the language you are using)
 
 2. Paste it in the folder of your C or C++ project

 3. Include it at the top of your code with #include "meadowc.h" or #include "meadowcpp.h"


## Meadow in C

 There are 4 functions in the current version. The main one is meadow();. It takes two arguments - the size of the X axis and the size of the Y axis of your meadow. Then a field will be printed out.

 To place symbols on the meadow, you have to asign where you want to place them before calling the function with the two dimensional array m[][]. For example, if you write m[1][1] = 254; before

 calling the meadow(); function you will get a square printed out on the first row and first column of your meadow. That is because 254 is the symbol for square in the ASCII table. You can use any

 symbol from there you desire. Example ASCII table: http://www.asciitable.com

 The second function is called mclear(stands for meadow clear) and it takes no arguments. It simply clears your field, making all values 0.
 
 The third function is called mfill(stands for meadow fill) and it fills the space between two coordinates that you point out. It takes 5 arguments: mfill(x coordinate of first corner, y coordinate of the first corner, x coordinate of the second corner, y coordinate of the second corner, "material" which the space will be filled with);
 
 You can choose any two corners of the space you want filled and write their coordinates respectively.

 The fourth function is called mfont(stands for meadow font) and it takes no arguments. Since most fonts are not symetrical, your meadow may look extended. This is why you can use the mfont(); function to make your meadow a perfect rectangle.

 You can change the code of the library by simply right-clicking the meadowc.h file and editing it with your desired program.

## Meadow in C++

 There are 3 functions in the current version. The main one is meadow(); and it can take up to three arguments - the size of the X axis of your meadow, the size of the Y axis of your meadow and whether or not you want to use the font fixing option. Then a field will be printed out.

 To place symbols on the meadow, you have to asign where you want to place them before calling the function with the two dimensional array m[][]. For example, if you write m[1][1] = 254; before

 calling the meadow(); function you will get a square printed out on the first row and first column of your meadow. That is because 254 is the symbol for square in the ASCII table. You can use any

 symbol from there you desire. Example ASCII table: http://www.asciitable.com

 Most fonts are not symetrical and your meadow may seem extended. This is why you have the option to write true as the third argument when calling the meadow(); function. This will fix the font so your meadow is a perfect rectangle.

 Not passing the funtion any arguments will result in using the defaults. This would mean that your meadow will be 20x20 and your font will not be fixed.

 The second function is called mclear(stands for meadow clear) and it takes no arguments. It simply clears your field, making all values 0.
 
 The third function is called mfill(stands for meadow fill) and it fills the space between two coordinates that you point out. It takes 5 arguments: mfill(x coordinate of first corner, y coordinate of the first corner, x coordinate of the second corner, y coordinate of the second corner, "material" which the space will be filled with);
 
 You can choose any two corners of the space you want filled and write their coordinates respectively.


## Version log:

Meadow 1.0: One function called meadow(); that takes no arguments. Works with C and C++

Meadow 2.0: Function meadow(length of X axis of your meadow, length of Y axis of your meadow); now takes two arguments, regarding the size of your meadow. No longer works with C, only C++

Meadow 2.1: Same as v2.0, but without unnecessary comments and spaces

Meadow 3.0: Changed two-dimensional array from f[][] to m[][] for simplicity. Added a1, a2, a3, a4 and a5 to help you change the symbols used without having to edit the code. Minor changes in code

Meadow 4.0: Compatibility with both C and C++ again. Changed a1, a2, a3, a4 and a5 to ma1, ma2, ma3, ma4 and ma5 so it does not confuse other variables that you have named that way. Added mclear(); function

Meadow 4.1: Same as v4.0, but without unnecessary comments and spaces

Meadow 5.0: Added mfill(); function.

Meadow 6.0: Added option to use symetrical font. Removed ma1, ma2, ma3, ma4 and ma5 for lack of necessity. Separated versions for C and C++. Added mfont(); function for the C version. Made arguments for meadow(); function unnecessary and added a font argument in C++
