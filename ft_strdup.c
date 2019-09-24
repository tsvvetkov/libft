#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (NULL == dest)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return (dest);
}
