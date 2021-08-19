#include <stdio.h>

int	main(void)
{
	int	arr[42] = { 0, };
	int a, remain;
	int ret = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		remain = a % 42;
		arr[remain] += 1;
	}
	for (int j = 0; j < 42; j++)
	{
		if (arr[j] != 0)
			ret++;
	}
	printf("%d", ret);
	return (0);
}