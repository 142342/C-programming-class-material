#include <stdio.h>

int main(void)
{
                    //Relational operators

    //Used to find the relationship between two variables. 
    //In computer science, a relational operator is language construct.
    //It's an operator and it defines a relationshop between two entities.
    //The main usage is to make decisions, especially in loops and conditional statements.

    //List of the relational operators
    /*
        == : It checks equality (x == y) if true, the bracket is True
        != : It checks inequality (x != y) if true, the bracket is True
        > : It checks if greater than.
        < : It checks if less than.
        >= : It checks if greater than or equal.
        <= : It checks if smaller than or equal.
    */
    
    //True and false in C
    /*
        True is any number that does not equal zero:
        1 is true
        1000 is true
        -4 is true
        Any number except 0 is true

        False is equal to 0
    */

    //Let's apply these operators.
    int int_y = 0;
    int int_x = 10;
    int int_o = 0;

    int_o = (int_y == int_x);
    printf("This is isEqual operation: %d\n", int_o);
    int_o = (int_y == int_y);
    printf("This is isEqual operation: %d\n", int_o);
    int_o = (int_y != int_x);
    printf("This is notEqual operation: %d\n", int_o);
    int_o = (int_y > int_x);
    printf("This is greaterThan operation: %d\n", int_o);

    //              Assignment operators
    /*
        = : Assign (what we have used so far)
        += : Add and assign, which is equivalent to saying x += 1 -> x = x + 1
        -= : Subtract and assign, which is equivalent to saying x -= 1 -> x = x - 1
        *= : Multiply and assign, which is equivalent to saying x *= 2 -> x = x*2
        /= : Divide and assign, which is equivalent to saying x /= 2 -> x = x/2
        %= : Modulus and assign, which is equivalent to saying x %= 2 -> x = x%2
        &= : AND then assign, which is equivalent to saying x &= 2 -> x = x&2
        |= : OR then assign, which is equivalent to saying x |= 2 -> x = x|2
        ^= : XOR then assign, which is equivlane to saying x ^= 2 -> x = x^2
        >>= : Shift right then assign, which is equivalent to saying x >>= 1 -> x = x>>1
        <<= : Shift left then assign, which is equivalent to saying x <<= 1 -> x = x<<1
    */
    
    int int_x1 = 0; 
    int int_x2 = 0;
    int int_x3 = 0;
    int int_x4 = 10; 
    int int_x5 = 10;
    int int_x6 = 10; 
    int int_x7 = 1;
    int int_x8 = 0; 
    int int_x9 = 0;
    int int_x10 = 1; 
    int int_x11 = 1;

    int_x1 = 10;
    int_x2 += 10;
    int_x3 -= 5;
    int_x4 *= 5;
    int_x5 /= 5;
    int_x6 %= 3;
    int_x7 &= 3;
    int_x8 |= 1;
    int_x9 ^= 1;
    int_x10 >>= 1;
    int_x11 <<= 1; 

    printf("These are the operations and their outcomes:\n"
    " Assign: %d\n Add and assign: %d\n"
    " Sub and assign: %d\n"
    " Mult and assign: %d\n"
    " Div and assign: %d\n"
    " Mod and assign: %d\n"
    " AND and assign: %d\n"
    " OR and assign: %d\n"
    " XOR and assign: %d\n"
    " Shift right and assign: %d\n"
    " Shift left and assign: %d\n", 
    int_x1, int_x2, int_x3, int_x4, int_x5, int_x6, int_x7, int_x8, int_x9, int_x10, int_x11);


    printf("**********************************\n");

    //Logical operators
    /*
        AND: && an example is 5 && 10
        OR: || an example is 5 || 10
        NOT: ! an example is !1
    */

    //Examples

    int int_y1 = 3 && 0; // 3 is true and 0 is a false. So true AND false would give us false.
    printf("This is logical AND between 3 and 0: %d\n", int_y1);
    int int_y2 = 3 || 0; // 3 is true and 0 is false. So true OR false would give us true.
    printf("This is logical OR between 3 and 0: %d\n", int_y2);
    int int_y3 = !50; // We expect 50 to be true, hence the NOT 50 is false.
    printf("This is logical NOT 50: %d\n", int_y3);




    return 0;
}   