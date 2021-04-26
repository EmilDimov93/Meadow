# Meadow Library 5.0
 A C and C++ library that will create a fully functioning field that will allow you to print symbols at a specific location.

 Hello! In this file you will find more information on the meadow.h library(version 5.0). It makes creating a game, graph or etc in C and C++ so much easier.

 Using the library is simple:

 1. Download the meadow.h file from this repository
 
 2. Paste it in the folder of your C or C++ project

 3. Include it at the top of your code with #include "meadow.h"


 In the current version of the library, there are three functions. The main one takes two arguments - meadow(length of X axis of your meadow, length of Y axis of your meadow);. For example, if you use meadow(20, 10); the function will print out a field that is 10x10 symbols large. 
 
 There is a two-dimensional array, which controls where the symbols you choose get printed out. For example, if you use m[1][1] = 1;, this will make the first symbol of the first row become the ASCII code, enumerated with one. You can change the first five symbols by changing the value of ma1, ma2, ma3, ma4 and ma5 in any function to any ASCII code you desire. Link to example ASCII table: http://www.asciitable.com. These are the first 5 symbols. If you want to add more symbols, you will have to change the code of the library. You can do that by right-clicking the file and editing it with your desired program. Comments will help you with understanding the code better.
 
 The second function is called mclear(stands for meadow clear) and it takes no arguments. It simply clears your field, making all values 0.
 
 The third function is called mfill(stands for meadow fill) and it fills the space between two coordinates that you point out. It takes 5 arguments: mfill(x coordinate of first corner, y coordinate of the first corner, x coordinate of the second corner, y coordinate of the second corner, "material" which the space will be filled with. Use numbers one to five);
 You can choose any two corners of the space you want filled and write their coordinater respectively.

 ## Warning: 
 Most fonts are not symetrical when it comes to the X and Y axis of a symbol. This is why if you make your meadow have the same X and Y axis size(such as 10x10), it would seem extended.



 ## Version log:

Meadow 1.0: One function called meadow(); that takes no arguments. Works with C and C++

Meadow 2.0: Function meadow(length of X axis of your meadow, length of Y axis of your meadow); now takes two arguments, regarding the size of your meadow. No longer works with C, only C++

Meadow 2.1: Same as v2.0, but without unnecessary comments and spaces

Meadow 3.0: Changed two-dimensional array from f[][] to m[][] for simplicity. Added a1, a2, a3, a4 and a5 to help you change the symbols used without having to edit the code. Minor changes in code

Meadow 4.0: Compatibility with both C and C++ again. Changed a1, a2, a3, a4 and a5 to ma1, ma2, ma3, ma4 and ma5 so it does not confuse other variables that you have named that way. Added mclear(); function

Meadow 4.1: Same as v4.0, but without unnecessary comments and spaces

Meadow 5.0: Added mfill function.
