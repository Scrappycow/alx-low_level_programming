/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **sop;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	sop = malloc((height + 1) * sizeof(char *));
	if (sop == NULL || height == 0)
	{
		free(sop);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				sop[i] = malloc((c - a1 + 2) * sizeof(char));
				if (sop[i] == NULL)
				{
					ch_free_grid(sop, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			sop[i][j] = str[a1];
		sop[i][j] = '\0';
	}
	sop[i] = NULL;
	return (sop);
}
