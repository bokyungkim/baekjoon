#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1000001];
	int alpha[26] = {
		0,
	};
	int len = 0;

	scanf("%s", s);
	len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		alpha[s[i] - 65] += 1;
	}

	int max_idx = 0;
	int max_val = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max_val)
		{
			max_val = alpha[i];
			max_idx = i;
		}
	}
	alpha[max_idx] = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == max_val)
			max_val = -1;
	}
	if (max_val == -1)
		printf("?");
	else
		printf("%c", (char)(max_idx + 65));
	return (0);
}