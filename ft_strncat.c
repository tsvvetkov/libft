#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	q;

	i = ft_strlen(s1);
	q = 0;
	while (s2[q] != '\0' && q < n)
	{
		s1[i + q] = s2[q];
		q++;
	}
	s1[i + q] = '\0';
	return (s1);
}
