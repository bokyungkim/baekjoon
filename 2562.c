#include <stdio.h>

int	main(void)
{
	int	num;
	int	max;
	int	idx;

	max = -1;
	idx = -1;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			idx = i;
		}
	}
	printf("%d\n%d", max, idx);
	return (0);
}