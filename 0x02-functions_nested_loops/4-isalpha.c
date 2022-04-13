

#include "main.h"

/**

 * main - check the code.

 *

 * Return 1 if c is a letter

 * int c to print

 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))

{

return (1);

}

else

{

return (0);

}

}
