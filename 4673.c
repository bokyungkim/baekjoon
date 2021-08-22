#include <stdio.h>

int	d(int n)
{
	int ret = n;

	while (n > 0)
	{
		ret += n % 10;
		n /= 10;
	}

	return (ret);
}

int	main(void)
{
	int arr[10001] = { 0, };
	int check;

	for (int i = 0; i < 10001; i++)
	{
		check = d(i);
		if (check <= 10000)
			arr[check] = 1;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}
	return (0);
}