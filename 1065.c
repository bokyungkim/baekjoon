#include <stdio.h>

int main(void)
{
	int num, digit, tmp, j;
	int n[5];
	int diff[5];
	int count = 0;

	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		tmp = i;
		digit = 0;
		for (j = 0; j < 5; j++)
		{
			n[j] = 10;
			diff[j] = 10;
		}
		for (j = 0; tmp > 0; j++)
		{
			n[j] = tmp % 10;
			tmp /= 10;
			digit++;
		}
		for (j = 0; n[j + 1] < 10; j++)
			diff[j] = n[j] - n[j + 1];
		if (digit == 1 || digit == 2)
			count++;
		else if (digit == 3)
		{
			if (diff[0] == diff[1])
				count++;
		}
	}
	printf("%d", count);
}