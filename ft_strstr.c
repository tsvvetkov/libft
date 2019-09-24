#include "libft.h"

char	*ft_strstr(const char *where, const char *what)
{
	unsigned int	j;

	if (!*what)
		return ((char *)where);
	while (*where)
	{
		j = 0;
		while (*(what + j) && (*(where + j) == *(what + j)))
			j++;
		if (*(what + j) == '\0')
			return ((char *)(where));
		where++;
	}
	return (NULL);
}
