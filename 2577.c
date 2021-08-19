#include <stdio.h>

int	main(void)
{
	int	a, b, c, ret, tmp;
	int	num = -1;

	scanf("%d\n%d\n%d", &a, &b, &c);
	num = a * b * c;
	for (int i = 0; i < 10; i++)
	{
		ret = 0;
		tmp = num;
		while (tmp > 0)
		{
			if (tmp % 10 == i)
				ret++;
			tmp /= 10;
		}
		printf("%d\n", ret);
	}
	return (0);
}