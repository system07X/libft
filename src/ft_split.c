#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ischarset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}


int count_word(char *str, char charset)
{
	int i;
	int cpt;

	cpt = 0;
	i = 0;
	while (str[i])
	{
		if (ischarset(str[i], charset) == 1)
		{
			cpt++;
			i++;
		}
		else
			i++;
	}
	return (cpt + 1);
}

int *word_len(char *str, char charset)
{
	int i; 
	int j; 
	int k; 
	int cpt;
	int *tab;

	i = -1;
	j = 0;
	k = 0;
	cpt = 0;
	tab = malloc(sizeof(int) * count_word(str, charset));
	while (++i <= (int)strlen(str))
	{
		if (ischarset(charset, str[i]) == 1 || str[i] == '\0')
		{
			j = i - 1;
			while(j >= 0 && ischarset(str[j--], charset) == 0)
				cpt++;
			tab[k++] = cpt;
			cpt = 0;
		}
	}
	return(tab);
}

char	**ft_split(char *str, char charset)
{
	char **strs;
	int *tab;
	int i;
	int j;
	int k;

	i = -1;
	k = -1;
	tab = word_len(str, charset);
	strs = malloc(sizeof(char *) * count_word(str, charset));
	if (strs == NULL)
		return (NULL);
	while (++i < count_word(str, charset))
	{
		j = -1;
		strs[i] = malloc(sizeof(char) * tab[i]);
		while (++j < tab[i])
			strs[i][j] = str[++k];
		k++;
	}
	return (strs);
}

int main()
{
    char **strs;
    char charset = ' ';
    char chaine[] = "a a  a";
    int i;

    i = 0;
    strs = ft_split(chaine, charset);
    while (i < count_word(chaine, charset))
    {
        printf("%s\n", strs[i]);
        i++;
    }
}