#include <unistd.h>

/**
* _putchar - wirte the character c to stdout
* @c: The character to print
* Return 1 if true, 0if false
*On error, -1 return.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
