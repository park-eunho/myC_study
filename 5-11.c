#include <stdio.h>

void main()
{
	int a,b,result;
	char c;
	

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d* ", &a, &c, &b);

	switch (c) {
		case '+' :
			  result = a + b;
			  printf("%d %c %d = %d �Դϴ�.", a, c, b, result);
			  break;

		case '-' :
			  result = a - b;
			  printf("%d %c %d = %d �Դϴ�.", a, c, b, result);
			  
			  break;
		case '*' :
			 result = a * b;
			 printf("%d %c %d = %d �Դϴ�.", a, c , b, result);
			 	
			 break;
	       		
      		case '/' :
			 result = a / b;
			 printf("%d %c %d = %d �Դϴ�.", a, c, b, result);
			  break;

	        case '%' :
			  result = a % b;
			  printf("%d %c %d = %d �Դϴ�.", a, c, b, result);
			  break;

		default :
			 printf("�����ڸ� �߸� �Է��߽��ϴ�.");	  
			 break;
	}
}
