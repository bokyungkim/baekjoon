#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	num, repeat;
	char str[21];

	scanf("%d\n", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s", &repeat, str);
		for (int j = 0; j < strlen(str); j++)
		{
			for (int k = 0; k < repeat; k++)
				printf("%c", str[j]);
		}
		printf("\n");
	}
	return (0);
}