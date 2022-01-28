#include <stdio.h>

int main(void)
{
    /*Statements in C
    You have 4 main categories of statements in C
    1 - Selection statements: if and switch.
    2 - Iteration statements: while, do, and for.
    3 - Jump statements: break, continue, and goto.
    4 - Other C statements: Compound statement and null statement.
    */

    //Let's start with the last category, the other C statements.
    //Compound statement
    {

    }

    /*Jump statements
    Break statement:
    Continue statement:
    Goto statement:
    */

    //Selection statements
    //2 types: If and switch statements

    //If statement
    //If statement allows the program to select some particular execution path from a set of alternatives.
    //Syntax: if(condition) statement
    int grade = 72;
    int temp = 30;
    
    if (grade == 0)
    {
        printf("True\n");
    }

    //Caution: saying grade = 0 assigns a 0 to grade and then this results into condition being false.
    //Likewise, saying grade = 1 assign a 1 to grade and then this results into condition being true.

    //Usually it is used to check if a variable falls within a range of values.
    if((50 <= grade) && (grade <60))
        printf("The grade of the person is D\n"); 

    if(temp < 0 || temp > 50)
        printf("The temperature is extreme!\n");

    //If... else statement
    //This allows you to specify different statements to be performed when the condition is true and when it's false.
    if(temp < 27)
        printf("Temperature is above room temperature!\n"); //This is performed if condition is true.
    else
        printf("Temperature is equal to or below room temperature.\n"); //This is performed if condition is false.

    //Nesting: Tests for multiple cases by replacing from out to inside the if statements
    if(grade > 50)
    {
        if(temp > 27)
        {
            printf("You're on fire both in grades and the temperature!\n");
        }
    }

    //Cascading: It's a series of conditions stopping as soon as one of them is true.
    /*
        if(condition)
            statement;
        else if(condition)
            statement;
        else if(condition)
            statement;
        else
            statement;
    */

    if(grade >= 90)
        printf("Excellent\n");
    else if(grade >= 70)
        printf("Very good\n");
    else if(grade >= 60)
        printf("Good\n");
    else
        printf("Bad\n");

    //Dangling else problem
    //When if statements are nested, the "dangling else" problem may occur.
    if(grade > 50)
        if(grade > 80)
            printf("Excellent");
    else
        printf("Very good");

    // Notice, the indentation (even though visual), is wrong
    // You may think that the else clause belonds to the outer if statement.
    // However, in C programming, the rule is that an else clause belonds to the nearest if statement.

    // Correct form of the above section
    if(grade > 50)
        if(grade > 80)
            printf("Excellent");
        else
            printf("Very good");

    // General rules for the if statement
    /*
        1 - else if statement is optional. You may have no else if's, or you may have one or more.
        2 - else statement is optional, but you can have only one else statement.
        3 - No code is allowed between if and else if or else.
        4 - Nesting is allowed.
        5 - If the condition is a combination, you may want to use round brackets to separate each part in the combination.
        6 - In case of only one statement (action), it's recommended that you use {}, even though it's not needed.
    */

    return 0;
}