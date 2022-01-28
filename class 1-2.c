/*
Name: Simple C program: Hello world
Purpose: Acts as a demo for teaching
Author: Wayfarer
Last edited by
Version
*/

// Comments
// The forward vs backward slash distinction
// Forward is what we used to comment with here.
// It looks like a man leaning forward.
// The backwards slash looks like a mean leaning backwards.

#include <stdio.h> //Preprocessor directive "include"

//We have 11 preprocessor directives, which all start with "#"
//1 keyword that starts with # is not a preprocessor directive; #pragma

/*
Function name: main
Function's inputs: None
Function's outputs: Returns 0
Purpose: This is the main function of the program
*/

int main (void)
{
    //Separator print
    // Tip: You can separate the printf string literal on multiple lines through single space concatenation and quotation marks.
    printf(
    "**********************************\n"
    "Tuesday the 7th of December class\n"
    "**********************************\n");

    ////////////// The class ////////////////////
    printf("Hello world\n"); //printf is part of the stdio library

    //Escape sequences
    // \n a new line
    // \t a horizontal tab -
    printf("Horizontal \t tab\n");
    // \v a vertical tab
    printf("Vertical \v tab\n");
    // \\ Insert a backslash.
    printf("Insert \\ a backslash\n");
    // \" Insert a quotation mark.
    printf("Insert a quotation mark \"\n");
    // \' Insert a single quotation mark
    printf("Insert a single quotation mark \'\n");
    // Printing a % sign
    printf("This is a percentage sign %%\n");

    //Separator print
    printf("**********************************\n");
    printf("Thursday the 9th of December class\n");
    printf("**********************************\n");

    ////////////// The class ////////////////////
    //Variables
    /*
    A variable is a memory location that holds a piece of data.
    There are many types of variables in C.
    All variables must be defined with a name.
    All variables must have a data type before we can use them.
    */

    //Syntax for defining a variable: type name; or type name = initial_value
    //There's a difference between defining a variable and assigning a value to a variable
    int x; //Uninitialised
    //What value would this uninitialised variable take

    int y = 0;//Initialised

    // Defining multiple variables at once.
    // Without initialising
    int column, row, index;
    // With initialising
    int x1 = 0, x2 = 0, x3 = 0;
    // Another way
    int y1, y2, y3;
    y1 = y2 = y3 = 0;

    // Note: Using the following would result in initialising only the last variable.
    int z1, z1, z3 = 0;

    /*
                    Naming rules for variables

        1. Variable names can contain:
            a. Capital letters from A to Z
            b. Small letters from a to z
            c. Numbers from 0 to 9
            d. Underscore _

        2. First character must either be an alphabet or an underscore
        
        3. No blanks and no commas

        4. No special symbols @, #, !....... ONLY _

        5. You can not use reserved words as a variable name

        6. CAUTION: Variable names are case-sensitive!

    */

    /*
        Naming conventions in C

        Naming conventions for C projects help in several ways. 
        They enable code to written in a consistent manner by everyone on the team. 
        Implementing new functionality is simply following the pattern. 
        Reading code is becomes easier as proper names give more context. 
        All of this also aids in debugging.

        They are used for both variables and functions.
        They are for variables that are either primitive or structures.

        Naming conventions can be in prefixes, suffixes, infixes, capitalisations and more!
        Things like the data type, size, signing, and where the data type is primitive/structure...
        These are all examples of things to agree upon when choosing a naming convention.
    */

    //Data types differ in size from one compiler to the other.
    //Non-initialized variables would hold garbage value.

    //Primitive data types in C
    //Character: Decimal data, usually it's 1 byte (8 bits)
    printf("The size of a character: %d\n", sizeof(char));
    char char_z = 'A';
    char char_d = 10;

    //Integer: Decimal data, 2 or 4 bytes, depending on the compiler.
    printf("The size of the integer: %d\n", sizeof(int));
    int int_z = 20;
    int int_z2 = 30;

    //Float: Floating data, normally 4 bytes.
    printf("The size of float: %d\n", sizeof(float));
    float f_z = 10.5;

    //Double: Floating data, normally 8 bytes.
    printf("The size of double: %d\n", sizeof(double));   
    double d_z = 20.5;


    //Printing variables
    //Syntax: printf("My variable value is: %format_specifier cool ", variable_name, variable_name, variable_name,...)
    /*
                    Some format specifiers
            %d  format specifier for decimal value
            %f  format specifier for floating value
            %c  format specifier for character value
    */

    //Printing an integer value
    printf("This is a decimal value: %d I can write after\n", int_z);
    printf("This is a decimal value: %c I can write after\n", char_d);
    //Printing a float value
    printf("This is a decimal value: %f I can write after\n", f_z);
    //Printing a character value
    printf("This is a decimal value: %c I can write after\n", char_z);

    //Printing multiple variables
    printf("This is variable number 1: %d, and this is variable number 2: %d\n", int_z, int_z2);

    // Reading input
    int scan_x = 0;
    printf("Please enter the value: ");
    scanf("%d", &scan_x);
    printf("\nThe current variable value is: %d", scan_x);

    return 0;
}

