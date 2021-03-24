# meadow library 2.0
 A C++ library that will create a fully functioning field that will allow you to print symbols at a specific location.
 
 NOTICE: The first version(meadow1_0.h in the old_versions folder) works for C as well as C++.

 Hello! In this file you will find more information on the meadow.h library(version 2.0). It makes creating a game, graph or etc in C and C++ so much easier.

 Using the library is simple:

 1. Download the meadow.h file from this repository
 
 2. Paste it in the folder of your C++ project

 3. Include it at the top of your code with #include "meadow.h"


 In the current version of the library, there is one function that takes two arguments - meadow(length of X axis of your meadow, length of Y axis of your meadow);. For example, if you use meadow(20, 10); the function will print out a field that is 10x10 symbols large. 
 
 There is a two-dimensional array, which controls where the symbols you choose get printed out. For example, if you use f[1][1] = 1;, this will make the first symbol of the first row become the ASCII code, enumerated with one(if you haven't changed the code, it will be symbol 254). Link to ASCII table: http://www.asciitable.com.

 So what if you want to change the symbols used? You right-click the meadow.h file and edit it with any program you wish. You will find instructions on how to deal with the code in the form of comments(especially look at line 38).

Most fonts are not symetrical when it comes to the X and Y axis of a symbol. This is why if you make your meadow have the same X and Y axis size(such as 10x10), it would seem extended.



Version log:

Meadow 1.0: One function called meadow();, takes no arguments

Meadow 2.0: Function meadow(length of X axis of your meadow, length of Y axis of your meadow); now takes two arguments, regarding the size of your meadow
