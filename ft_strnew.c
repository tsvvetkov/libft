/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:55:44 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:55:45 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*tmp;

	if (size + 1 == 0)
		return (NULL);
	tmp = (unsigned char *)malloc(sizeof(char) * (size + 1));
	if (NULL == tmp)
		return (NULL);
	*tmp = '\0';
	while (size != 0)
	{
		*(tmp + size) = '\0';
		size--;
	}
	return ((char *)tmp);
}
