#include <stdio.h>

int	find_alpha(char *word, char alpha)
{
	for (int i = 0; word[i]; i++)
	{
		if (word[i] == alpha)
			return (i);
	}
	return (-1);
}

int main(void)
{
	char word[101];
	int a;

	scanf("%s", word);
	for (char i = 'a'; i <= 'z'; i++)
	{
		a = find_alpha(word, i);
		printf("%d ", a);
	}
	return (0);
}