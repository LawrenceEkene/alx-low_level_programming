#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**

 * main - Entry point

 *

 * Printing Aplhabets in lowercase and uppercase

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

	for (low = 'A'; low <= 'Z'; low++)

{

		putchar(low);

}

		putchar(ASCII);



	return 0;

}
