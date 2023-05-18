/*
 *
 * 	Pridict the output of the following code.
 *
 */

/*
 *	in function two return statements should never occur successively (true / false)
 */
// Example

#include <stdio.h>

int someFunction(int value)
{
    if (value > 0)
        return 1;
    else if (value < 0)
        return -1;
    else
        return 0;
    
    return 42;  // This statement will never be reached
}

int main()
{
    int result = someFunction(10);
    printf("Result: %d\n", result);
    
    return 0;
}


/*
 * Pridiction :
 * ----------
 *  	In C programming, it is true that return statements should not occur successively 
 *  	in a function without any code in between. 
 *  	If multiple return statements appear consecutively without any intervening code, 
 *  	it can lead to unexpected behavior and potential logical errors.
 *
 */
