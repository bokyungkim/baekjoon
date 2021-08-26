#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int change_n_convert(char s[])
{
	char tmp;
	int ret;

	tmp = s[2];
	s[2] = s[0];
	s[0] = tmp;
	ret = atoi(s);
	return (ret);
}

int main(void)
{
	char s[7] = {
		0,
	};
	int a = 0;
	int b = 0;

	scanf("%[^\n]s", s);
	char *ptr = strtok(s, " ");
	while (ptr != NULL)
	{
		if (a == 0)
			a = change_n_convert(ptr);
		else
			b = change_n_convert(ptr);
		ptr = strtok(NULL, " ");
	}
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return (0);
}