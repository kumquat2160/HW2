#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, i;
	float  b, c, d, e, g;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		printf("Enter begining balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credit:");
		scanf_s("%f", &g);
		printf("Enter credit limit:");
		scanf_s("%f", &d);
		e = b + c - g;
		if (e > d)
		{
			printf("account:%d\n", a);
			printf("credit limit:%.2f\n", d);
			printf("blance:%.2f\n", e);
			printf("credit limit Exceeded\n\n");
		}
	}
}