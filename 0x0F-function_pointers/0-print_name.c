#include "function_pointers.h"

/**
 * print_name- is a function to print the name of data type string
 * 
 * @name: name of a person
 * @f: is the function pointer to the name of the person
*/

void print_name(char *name, void (*f)(char *))
{
    if (f && name)
            f(name);
}
