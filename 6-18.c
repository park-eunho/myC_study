#include <stdio.h>

void main()
{
	int dan;
	for(dan=1; dan<10; dan++){
	 	printf(" #Á¦%d´Ü#", dan);
	}
	printf("\n");
	printf("\n");
	int i, k;
	for(i=1; i<=9; i++)
	{
		for (k=1; k<=9; k++)
		{
			printf("%2dX%2d=%2d", k, i, k*i);
		}
		printf("\n");
	}

}	
