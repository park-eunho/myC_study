#include <stdio.h>

int a = 100;

void func1()
{
	int a = 200;
	printf ("func1()����  a�� ��==> %d\n");
}

void main()
{
	func1();
	printf("main() ���� a�� ��==> %d\n", a);
}
