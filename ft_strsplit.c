char **		ft_strsplit(char const *s, char c)
{
	int i;
	int o;
	int p;
	char **ret;
	i = 0;
	o = 0;
	p = 0;
	while(s[i] != '\0')
		i++
	ret = (char **) malloc(i + 1 * sizeof(char))
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			while (s[i] == c)
			i++;
		}
		while(s[i] != c)
		{
			ret[o][p] = s[i];
			p++;
			i++;
		}
		o++;
	}
	return(ret);
}
