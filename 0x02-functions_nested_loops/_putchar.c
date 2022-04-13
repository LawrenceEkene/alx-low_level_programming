#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>



/**

 * main - Entry point

 *

 * Prints putchar

 *

 * Return: Always 0 (Success)

 */

int _putchar(char c)

{

return (write(1, &c, 1));

}
