#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (lst)
	{
		tmp = lst->next;
		f(lst);
		lst = tmp;
	}
}
