#include <stdio.h>

void main()
{
	int a,b,tmp;
	int *p1,*p2;

	p1=&a;
	p2=&b;

	printf("a �� �Է� : ");
	scanf("%d", &a);

	printf("b �� �Է� : ");
	scanf("%d", &b);

	tmp=*p1;
	*p1=*p2;
	*p2=tmp;

	printf("�ٲ� �� a�� %d, b�� %d", a, b);
}
