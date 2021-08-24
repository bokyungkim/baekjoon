#include <stdio.h>

int	main(void)
{
	int	num;
	int sum = 0;
	char c;

	scanf("%d\n", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%c", &c);
		sum += (int)(c - 48);
	}
	printf("%d", sum);
	return (0);
}