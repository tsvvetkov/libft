#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
