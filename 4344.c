#include <stdio.h>

int	main(void)
{
	int	num, std, avg;
	float ret;

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &std);
		int arr[std];
		avg = 0;
		ret = 0;
		for (int j = 0; j < std; j++)
			arr[j] = -1;
		for (int j = 0; j < std; j++)
		{
			scanf("%d", &arr[j]);
			avg += arr[j];
		}
		avg /= std;
		for (int j = 0; j < std; j++)
		{
			if (arr[j] > avg)
				ret++;
			arr[j] = -1;
		}
		ret = ret / std * 100;
		printf("%.3f%%\n", ret);
	}
	return (0);
}