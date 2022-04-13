#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - Entry point

 *

 * Printing letters with base 16

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

int c;

for (c = 48 ; c < 58; c++)

{

putchar(c);

if (c != 57)

{

putchar(',');

putchar(' ');

}

}

putchar('\n');

return (0);

}
