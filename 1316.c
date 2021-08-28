#include <stdio.h>
#include <string.h>

void word_init(char *word)
{
	for (int i = 0; i < strlen(word); i++)
		word[i] = 0;
}

int	word_check(char *word)
{
	int	alpha[26] = { 0, };

	for (int i = 0; i < strlen(word); i++)
	{
		if (alpha[word[i] - 'a'])
			return (0);
		else
		{
			char tmp = word[i];
			alpha[word[i] - 'a'] = 1;
			while(1)
			{
				if (tmp != word[++i])
				{
					i--;
					break;
				}
			}
		}
	}
	return (1);
}

int	main(void)
{
	int	num;
	int	count = 0;
	char	word[100];

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		word_init(word);
		scanf("%s", word);
		if (word_check(word))
			count++;
	}
	printf("%d", count);
	return (0);
}