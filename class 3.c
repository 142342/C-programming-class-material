#include <stdio.h>

int main(void)
{
    // C operators
    // They are used to perform mathematical and logical operations on numbers and variables.

    //                  Arithmetic operators
    //Bi arithmetic operators: These operators will operate on 2 operands.
    /*
        Addition: +
        Substraction: -
        Multiplication: *
        Division: /
        Modulus: %
    */

    int int_x = 10;
    int int_y = 5;
    int int_z = 3;
    int int_o;
    // Addition
    int_o = int_x + int_y;
    printf("This is the outcome of the operation: %d\n", int_o); // Excpected to give me a 15

    // Subtraction
    int_o = int_x - int_y;
    printf("This is the outcome of the operation: %d\n", int_o); // Expected to give me a 5

    // Division
    int_o = int_x / int_y;
    printf("This is the outcome of the operation: %d\n", int_o); //Expected to give me 2

    // Multiplication
    int_o = int_x * int_y;
    printf("This is the outcome of the operation: %d\n", int_o); // Expected to give me a 50

    // Modulus: Returns the remainder from a division operation
    int_o = int_x % int_y;
    printf("This is the outcome of the operation: %d\n", int_o); // Expected to give me a 0
    int_o = int_x % int_z;
    printf("This is the outcome of the operation: %d\n", int_o); // Expected to give me a 1


    // Unary operators
    printf("******************\n");
    printf("Unary operators\n");

    /*
        Increment: ++
        Decrement: --
    */

    // Increment
    // Postfix increment: Operator follows the operand.
    // This means that this operand's value will change after I use it.
    int_x++; // This is equivalent to int_x = int_x + 1;
    
    // We expect it to be equal to 11

    int int_post = int_x++; // int_post = 12 and int_x = 13
    printf("This is the outcome of the postfix operation: %d and %d\n", int_post, int_x);
    ++int_x; // We expect it to equal 13
    int int_pre = ++int_x; // Both of them equal to 14
    printf("This is the outcome of the prefix operation: %d and %d\n", int_pre, int_x);

    // Decrement
    int_post = int_x--;
    printf("This is the outcome of the postfix operation: %d and %d\n", int_post, int_x);
    int_pre = --int_x;
    printf("This is the outcome of the prefix operation: %d and %d\n", int_pre, int_x);

    printf("******************\n");
    printf("Bitwise operators\n");

    //                  Logical operators
    // Bitwise operators
    /*
        AND: &
        OR: | (shift + backslash)
        NOT: ~ (shift + the button before the '1')
        XOR: ^ (shift + 6)

        Shift left: << (Most significant bit is discarded and for the least significant a 0 pushes it from the left)
        Shift right: >> (Least significant bit is discarded and for the most significant bit a 0 pushes it from right)
    */

    // Int binary representation (4 bytes): 00000000 00000000 00000000 00000000 <- Binary representation of a 0
    // To write a binary number we can type: 0b10
    // To write a number in hexa: 0x10

    // What's really sad: We can not print using printf a binary representation

    int int_binary = 0b01; // It's equivalent to 1 in decimal == int int_binary = 1;
    int int_x0 = 0; // 00
    int int_x1 = 1; // 01
    int int_x2 = 2; // 10
    int int_x3 = 3; // 11

    // & operator will take 2 binary numbers that are equal in length
    int_o = int_x0 & int_x1; // We expect a 00 = 0
    printf("This is the outcome of the operation: %d\n", int_o);
    int_o = int_x1 & int_x2; // We expect a 00 = 0
    printf("This is the outcome of the operation: %d\n", int_o);
    int_o = int_x1 & int_x3; // We expect a 01 = 1
    printf("This is the outcome of the operation: %d\n", int_o);
    int_o = int_x3 & int_x2; // We expect a 10 = 2
    printf("This is the outcome of the operation: %d\n", int_o);

    return 0;
}