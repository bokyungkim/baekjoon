#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1000000];
	int space = 0;
	int len = 0;

	scanf("%[^\n]s", s);
	len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 32)
			space++;
	}
	if (s[0] == 32)
		space--;
	if (s[len - 1] == 32)
		space--;
	printf("%d", space + 1);
	return (0);
}