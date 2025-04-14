#include <stdio.h>

int main()
{
	if (1)
	{
		int i = 1;
		while (i <= 5)
		{
			int j = 1;
			while (j <= i)
			{
				printf("*");
				j = j + 1;
			}
			printf("\n");
			i = i + 1;
		}
	}

	return 0;
}
