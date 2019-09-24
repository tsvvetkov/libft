#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	q;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	q = 0;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (NULL == tmp)
		return (NULL);
	while (q < i)
	{
		tmp[q] = (*f)(s[q]);
		q++;
	}
	tmp[q] = '\0';
	return (tmp);
}
