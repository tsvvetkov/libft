#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	size_t	i;

	c = (char)ch;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == c)
		return ((char *)(str + i));
	return (NULL);
}
