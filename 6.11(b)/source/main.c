#include <stdio.h>
#include<stdlib.h>

int  main(void)
{
	int i, j, flag;
	int t = 0;
	int a[9] = { 1,3,5,6,9,8,4,7,10 };
	for (i = 0; i < 8; i++)
	{
		t = 0;
		for (j = 0; j < 8; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
		}
		if (t == 0)
			break;
	}

	printf("最大值%d", a[8], "\n");
	printf("最小值%d", a[0], "\n");
	system("pause");
	return 0;
}



	
