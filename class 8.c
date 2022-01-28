#include <stdio.h>

/*Implementation of the add()
    Name: add
    Functionality: adds 2 integers
    Inputs: 2 integers
    Return: integer
*/
int add(int x, int y)
{
    //2 ways to implement in this function.
    //The first is to return the expression x + y and the second is to return z.

    //The first method
    //int z = x + y;
    //return z;

    //The second method
    return x + y;
}

int main(void)
{
    /*Functions in C
        In this section, we'll go over some key features in the C language that facilitate our design,
        implementation and maintenance of large programs. Programs solve real-world progems.
        Programs are constructed from small pieces, each one of them is more manageable than the entire program.
        This technique is called divide and conquer.

        The building blocks of C programs are functions.
        Each function is a small program, with its own declarations and statements.
        Functions are also reusable, meaning that you can use the function in another program.
    */

    /*Argument vs parameter

        An argument is the actual value you give when calling the function.
        A parameter is the variable defined in the prototype and the function's implementation.
    */

    /*How to define and call functions
        
        Let's take an analogy.
        If you're going to open a shop, the first thing you'll is to make a banner announcing it.
        This banner, in C, we call it a prototype.
        Then, you're going to prepare your servics that will be offered in the shop.
        This preparation is what we call the implementation.
        Lastly, the customers will be calling the shop and asking for a service.
        You'll be responding to them with the services.
        This is called calling.

        The prototype
        Used to declare the function (the banner).
        Syntax: return_type function_name(input_type input_name, input_type input_name, ...);
        
        Benefits: 
                It tells the compiler the type of data returned by the function,
                the number of parameters the function expects to receive,
                the types of the parameters,
                the order in which these parameters are expected,
                and the compiler uses function prototypes to validate function calls.

                It helps you hide implementation details of a function.

                It helps the code that depends on your library be compiled separately from your own code.

        Previous versions of C did not perform this kind of checking.
        It was possible to call functions improperly without the compiler detection the errors.
        Such calls would result in fatal execution-time errors or non-fatal errors.
        So, function prortotypes correct this deficiency.

        If you defined the function (implementation) before calling it, you won't get an error if
        you don't include a prototype. However, if you did not define it before, but rather after,
        then you will be getting an error without the prototype.

        If you add the function declaration inside main, its scope is inside the main { }. 
        If you add it outside main, its scope is the entire source file.
    */

    /*Implementation
        The implementation contains a collection of statements that define what the function does.
        Syntax:
        return_type function_name(input_type input_name, ...)
        {

        }
    */

    /*Function call
        Used to execute the function
        Syntax: function_name(inputs);
    */

    //An example
    //Prototype/declaration of the function
    int add(int x, int y);

    //Calling the function
    int z = add(3, 4);
    printf("Result of add() is %d", z);

    /*Note
        In C, the main function is the most popular example of function.
        main() is usually implemented as a group of calls to functios that perofrm the bulk of the program.
    */

    /*Returning control from a function
        In C language, the return statement is the way that is used to terminate the execution of a function.
        Then the program control is transferred back to the calling function.
        In addition, it can specify a value to be returned by the function.
        If the function does not return a result, the program control is returned simply when the
        function-ending brace } is reached.

        Syntax: return statement;

        In C, we only have 1 direct return.
        Later, in the future, we'll see how to return more than 1 variable indirectly.
    */

    /*void keyword

        If there is no return statement (other than null), then our function should have void return_type.
        The void keywrod is used by any function to give the meaning of nothing.
        
        For example, if we need to define a function that takes no arguments,
        we would write between its () the keyword void as well.

        Also, if we want to define a function that doesn't return any outputs, we will write instead 
        of the return type keyword void.

        So, a function that has void return and void parameters is a function that simply
        takes no inputs and gives no outputs.

        Benefits of the void is that it tells the compiler that there are no parameters for this function.
    */

    /*Note
        1 - Check that your functions that are supposed to be returning an output actually do so.
        2 - Check that your functions that are not supposed to be returning an output actually do not.
    */

    /*Function errors list
        1 - Forgetting to a return a value from a function that is supposed to return a value.
        This can lead to unexpected errors.
        The C standard states that the result of this omission is undefined.

        2 - Returning a value from a function with a void return type is a compilation error.

        3 - Specifying function parameters of the same type as (int x, y) instead of (int x, int y).
        This would result in a compilation error.

        4 - Placing a semicolon after the right paranethsis (which encloses the parameter list) is a syntax error.

        5 - Defining a parameter again as a local variable in a function is a compilation error.
    */

    return 0;
}   