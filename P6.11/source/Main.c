#include <stdio.h>
#include <stdlib.h>

int a[9] = { 0,0,0,0,0,0,0,0,0 };
int temp  = 0;
int jud = 0;

int main(void)
{
	printf("請輸入9個整數，並使用空格分隔：\n");
	scanf_s("%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]);
	for (int i = 0; i <= 8; i++)
	{
		jud = 0;
		for (int j = 0; j <= 8 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
				jud = 1;
			}
		}
		if (jud = 1)
		{
			break;
		}
	}
	for (int i = 0; i <= 8; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}