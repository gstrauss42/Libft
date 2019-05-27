#include <stlib.h>

char *	ft_strtrim(char const *s)
{
	int i;
	int o;
	int end;
	char *ret;
	i = 0;
	o = 0;
	end = 0;
	while(s[end] != '\0')
		end++;
	ret =(char *) malloc (end * sizeof(char));
	while(s[i] == (' ' || '\n' || '\t'))
		i++;
	while(s[end] == (' ' || '\n' || '\t'))
		end--;
	while(i <= end)
	{
		ret[o] = s[i];
		i++;
		o++;
	}
//check if nesacerry	ret[i] = '\0';
	return(ret);
}
