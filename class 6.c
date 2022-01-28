#include <stdio.h>

int main(void)
{
    // In the previous class we talked about the if statement, which was a type of a selection statement.
    // In This class, we'll talk about the switch statement, which is the second type of selection statements.

    
    /*Switch statement
    It is a control statement that allows us to choose only one choice among many choices.
    It compares the variable value with the values present in the different cases.
    Then it executes that block of code with matches the case value.
    If there is no match, then the default block is executed.
    
    The switch statement can act as an alternative to the cascaded if statement.
    In this case, it would be faster than the if statement.
    */

    /*Rules for using the
        1- Each case must have a unique constant.
        2- Case constants can not be variable.
        3- Case constant must be an integer value.
        4- We can only have 1 default case.
        5- Default case is optional.
        6- We can end each case with an optional break after each case's block of code.
        7- Whichever case that has run and did not have a break statement, 
        then what will follow is the next case being checked.
        8- We can nest within the different switch cases.
    */

    /*The syntax
        switch(expression which is the case constant)
        {
            case 5:
                Any block of code ending with a semi colon; break; //Break part is optional
            case 500:
                Any block of code ending with a semi colon; break;
            .
            . //Any number of cases.
            .
            default: //It is the case that runs if no other case is met and it's optional.
                Any block of code;
        }

    */

    int num=1;
    int num2 = (num == 1);
    switch(num2+1)
    {
        case 1:    
            printf("Case1: Value is: %d\n", num);
            break;
        case 2:
           printf("Case2: Value is: %d\n", num);
           break;
        case 3:
           printf("Case3: Value is: %d\n", num); 
           break;        
        case 4:
           printf("Case4: Value is: %d\n", num); 
           break;
        case 10:
           printf("Case10: Value is: %d\n", num); 
           break;
        default:
           printf("Default: Value is: %d\n", num);
    }

    char ch='b';
    switch (ch)
     {
        case 'd':
            printf("CaseD \n");
            break;
        case 'b':
            printf("CaseB \n");
            break;
        case 'c':
            printf("CaseC \n");
            break;
        case 'z':
            printf("CaseZ \n");
            break;
         default:
            printf("Default \n");
    }



    if(ch == 'd')
        printf("if case d\n");
    else if(ch == 'b')
        printf("else if case b\n");
    else
        printf("if case else\n");

    //If statement vs switch statement
    /*
        A switch statement is usually more efficient than a set of nested if's.
        
        Deciding whether to use if-then-else statements or a switch statement is based on:
        1 - Readability of the code.
        2 - The expression that the statement is using.
            The if statement can test expressions based on ranges of values or conditions.
            The switch statement tests expressions based only on a single integer, enumerated value, or string object.
        
        With regards to speed...
        A switch statement might prove to be faster than if statement.
        This is provided that the number of cases are good.
        If there are only a few cases, then it might not affect the speed.
        Generally use a switch statement if the number of cases is more than 5.
        Otherwise, whichever of these statements is fine.

        With regards to multi-way branching...
        When a compiler compiles a switch statement, it will inspect each of the case constants.
        After the inspection, it creates a jump table.
        It uses this jump table to select a path of execution depending on the value of the expression.
        Therefore, if we need to select among a large group of values, a switch statement will run faster.
        The compiler can do this because it knows the case constants are all of the same type.
        So simply, they must be compared for equality with the switch expression.
        However, in the case of if expressions, the compiler does not have this knowledge.

        With regards to boolean values...
        If-else conditional branches are great for variable conditions that result into boolean.
        On the other hand, the switch statements are great for fixed data values.

        With regards to readability...
        A switch looks much cleaner when you have to combine cases.
        If statements look messy and harder to handle their errors.
        Missing an else statement could result in an error for example.
        It's much easier to remove or add different cases.
    */
    
    return 0;
}