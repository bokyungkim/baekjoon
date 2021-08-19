#include <stdio.h>

int	main(void)
{
	float	arr[1000] = { -1, };
	int	num;
	float	sum = 0;
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		scanf("%f", &arr[i]);
	float max = -1;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	printf("%f", sum / num);
	return (0);
}