#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, tmp;
	int A[5] = { 26,5,81,7,63 };
	int a = 4;

	for (i = 0; i <a; i++)
	{
		
		for (j = 0; j < 4; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
				
			}
			if (A[4] > A[3] && A[4] > A[2] && A[4] > A[1] && A[4] > A[0])
			{
				a--;
			}
			
		}
		printf("loop %d:", i);
		for (j = 0; j < 5; j++)
			printf("%4d", A[j]);
		printf("\n");

	}
	system("pause");
}