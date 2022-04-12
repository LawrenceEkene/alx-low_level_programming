#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - Entry point

 *

 * Printing signle digits

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

int i;

int ASCII = 10;

for (i = '0'; i <= '9'; i++)

{

putchar(i);

}

putchar(ASCII);

return (0);

}
