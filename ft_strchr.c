#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	c;

	c = (char)ch;
	while (*str != '\0')
	{
		if (*(str) == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
