#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - Entry point

 *

 * Printing Aplhabets in lowercase

 *

 * Return: Always 0 (Success)

 */



int main()

{

	char low;

        char ASCII = '\n';



	for (low = 'a'; low <= 'z'; low++)

{

		putchar(low);

}

		putchar(ASCII);



	return 0;

}
