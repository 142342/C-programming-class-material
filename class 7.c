#include <stdio.h>

int main(void)
{
    //Iteration statements (loops)
    //1 - While statement
    //A while statement is used for loops which check the condition before the loop is executed.
    //Syntax: while(condition) statement;

    //An example
    int x = 0;
    while(x != 10)
    { //the braces are not required but allowed
        printf("Try again\n");
        x++;
    }

    // The code inside this loop with be repeated until x becomes 10, then the condition becomes false.

    //Infinite while loop
    //while(1)
    //This while statement won't terminate if the conidition is not equal to zero.
    //We usually need this while statement to keep our program in loop and not fetch random values from the memory.
    //Eventually the loop is terminated using a termination statement such as break, goto, or exit.

    /*Important notes on while loop
        1 - Our condition must eventually become false.
        2 - You can nest loops, but many levels of nesting can make a program difficult to understand.
        3 - Don't put a semicolon after the condition, unless you can an infinite loop.

        //Example
        while(x != 0);
        4 - On command prompt, you can exit such loops using <ctrl-c>
    */

    //Do while statement
    //It is just like the while statement but the condition checking is done after instead.
    
    //An example
    int count = 1;
    do
    {
        printf("Current count is %d\n", count);
        count++;
    }
    while(count <= 10);

    //In this statement, the loop body is executed first, then it checks the condition.
    //It repeats until the condition becomes false.

    //for statement
    //Syntax: for(initializer; loop entry condition; updater) statement;

    //An example
    for(int i = 0; i < 5; i++)
    {
        printf("My current count is %d\n", i);
    }

    //This loop will start with initially having an i value of 0.
    //It will then test this condition.
    //If the condiiton is true, the body is executed, then the counter is incremented by 1.
    //The loop will be executed as long as the conidtion is true.
    //The loop above will be executed 5 times.

    /*Process
        1 - Initialization expression
        2 - Loop entry condition
        3 - Body statement (if loop entry condition is true)
        4 - Updater statement
        5 - Steps 2 - 4 will repeat until condition is not met.
    */

    /*Important notes
        The expressions in the for statement's header are optional.
        
        1 - if you omit the initialization expression, no initialization is performed before the loop.

        //Example    
        int i = 0;
        for( ; i < 5; i++)
        {
            printf("Hello");
        }

        So, in this example, i has been initialised before the for statement and omitted in the header.
        Also, notice that the semicolons must be present, even if we omitted some of th expressions.

        2 - We can also omit the condition epression.
        If we do that, C would assume that the loop entry condition is true, hence creating an infinite loop.

        //Example
        int i;
        for(i = 0; ; i++)
        {
            printf("Hello");
        }

        So, the above loop is considered an infinite loop.
        It's equivalent to while(1).
        The general form for this loop is for( ; ; )

        3 - If you omit the increment expression, you can implement an update within the loop's body.

        //Example
        int i = 0;
        for( ; i < 5; )
        {
            printf("Our current count is %d", i++);
        }

        //It is equivalent to the following while loop
        while(i < 5)
        {
            printf("Our current count is %d", i++);
        }
    */

    //Comma seperator stuff
    //Syntax: for(expr1, expr2; loop entry condition; updater) statement;
    //We have expr1 and expr2 which are 2 expressions.
    //The way this works is that we first evaluate expr1 and we discard the result.
    //Then we evaluate expr2 and then the value of expr2 will be the value of the entir expressions.
    //What you should know is that the left operand in the expression is evaluated first.

    //Break and continue statements
    /*Break statement
        A break statement can be used to jump out of a while, do..while, for or switch statements.
        It causes an immediate exit from the statement.
        Program execution continues with the next statement after the while, do..while, for or switch.
        Common uses of break is to escape early from a loop or to skip the remainder of the switch statement.
    */

    //Example
    while(1)
    {
        scanf("%d", &x);
        if(x == 1)
        break;
    }

    /*Continue statement
        If it's executed in a while, do..while or for statement, it skips the remaining statements in the body of the loop.
        Then it transfer to a point just before the end of the loop body.
        Then it performs the next iteration of the loop.
    */

    //Example
    for(int j = 0; j < 10; j++)
    {
        if (j == 5)
            continue;
        printf("It's not a 5, rather it's a %d\n", j);
    }
    return 0;
}