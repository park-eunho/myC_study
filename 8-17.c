#include <stdio.h>

void main()
{
	int gugu[9][9];

	for(int i=1; i<10; i++){

		for(int j=2; j<10; j++){
		gugu[j-2][i-1]=j*i;
		printf("%dX%d=%2d  ", j, i, gugu[j-2][i-1]);
		}
		printf("\n");
	}

}
