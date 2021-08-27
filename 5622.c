#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[15];
	int	ret = 0;

	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'C')
			ret += 3;
		else if (s[i] >= 'D' && s[i] <= 'F')
			ret += 4;
		else if (s[i] >= 'G' && s[i] <= 'I')
			ret += 5;
		else if (s[i] >= 'J' && s[i] <= 'L')
			ret += 6;
		else if (s[i] >= 'M' && s[i] <= 'O')
			ret += 7;
		else if (s[i] >= 'P' && s[i] <= 'S')
			ret += 8;
		else if (s[i] >= 'T' && s[i] <= 'V')
			ret += 9;
		else if (s[i] >= 'W' && s[i] <= 'Z')
			ret += 10;
		else ;
	}
	printf("%d", ret);
	return (0);
}