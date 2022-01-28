#include <stdio.h>

//A global variable x
int x = 10;

//The prototype of sum
int sum(int num1, int num2);

void func (void) //A local variable x, defined in the parameter type list
{
    int y = 0;//A local variable y
    int local_x = 20;//A local variable x by the same name as a global variable x
    //Naming notations prevent making such slipups. 

    //What we see is that the global variable x is not longer within the scope of func.
    //What is now taking its place in the scope is the local variable by the same name.

    y = sum(x,y);
    printf("This is my new y: %d\n", y);
}

int main(void)
{
    /*The scope of variables in C

    We have 2 broad scopes in C
    1 - The local variable is the variable that is defined inside any function.
    This variable can be accessed only in the function that defines it.

    An example is:
    void func (void)
    {
    int y = 0;
    }

    Where y is a local variable.

    Similarly, the function's parameters are also local variables of that function.
    This variable can be accessed only in the function that defines it.

    An example is: 
    void func (int x)
    {}

    Where x is our function's parameter and it is considered a local variable.

    2 - A global variable is a variable that is defined outside any function.
    This variable can be accessed in any function in the code.

    An example:
    int x = 0;
    void main(void)
    {
        //Statements...
    }

    void func(void)
    {
        //Statements...
    }
    */

    func();

    printf("This is my global variable x: %d\n", x);

    return 0;
}