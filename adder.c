#include <cs50.h>
#include <stdio.h>

int main (void)
{
	printf("give me an int: ");
	int x = GetInt();
	printf("give me other in: ");
	int y = GetInt();

	printf("the sum of %i and %i is %i!\n", x, y, x + y);

}
