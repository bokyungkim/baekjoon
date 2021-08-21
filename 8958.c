#include <stdio.h>

int	main(void)
{
	int	num, ret, score;
	char str[81];

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		ret = 0;
		score = 1;
		scanf("%s", str);
		for (int j = 0; str[j] != 0; j++)
		{
			if (str[j] == 'O')
			{
				ret += score;
				score++;
			}
			else if (str[j] == 'X')
				score = 1;
		}
		printf("%d\n", ret);
		for (int k = 0; str[k] != 0; k++)
			str[k] = 0;
	}
	return (0);
}