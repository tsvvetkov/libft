#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	q;

	q = 0;
	if (!s || !f)
		return ;
	else
	{
		while (s[q] != '\0')
		{
			(*f)(&s[q]);
			q++;
		}
	}
}
