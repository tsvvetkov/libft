#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	q;

	i = ft_strlen(s1);
	q = 0;
	while (s2[q] != '\0')
	{
		s1[i + q] = s2[q];
		q++;
	}
	s1[i + q] = s2[q];
	return (s1);
}
