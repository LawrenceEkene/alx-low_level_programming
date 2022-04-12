#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - Entry point

 *

 * Printing rerverse letters

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

char p;

int ASCII = '\n';

for (p = 'z'; p >= 'a'; p--)

{

putchar(p);

}

putchar(ASCII);

return (0);

}
