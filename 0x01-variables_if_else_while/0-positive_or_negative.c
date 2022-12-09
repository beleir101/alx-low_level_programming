#include <stdlib.h>


#include <time.h>
/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there
 * main function
 * then used if and else ifs to test the number
 * then printed out the result
  */

/* Used if and else if statments to check if the number is negative or not */

int main(void)

{

		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
		{
			printf("%d ", n);
			printf("is positive\n");
		}
		else if (n == 0)
		{
			printf("%d ", n);
			printf("is zero\n");
		}
		else
		{
			printf("%d ", n);
			printf("is negative\n");


		}

		return (0);

}
