#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i>0)
	  {
	    printf("%i is positive\n", i);
	  }
	else if (i==0)
	  {
	    printf("%i is zero\n", i);
	  }
	else if (i<0)
	  {
	    printf("%i is negative\n", i);
	  }
	return (0);
}
