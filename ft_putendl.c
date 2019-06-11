/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:14:55 by mnukeri           #+#    #+#             */
/*   Updated: 2019/06/11 12:37:30 by mnukeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int				k;
	unsigned char	*st;
	char			p;

	st = (unsigned char *)s;
	k = 0;
	while (st[k] != '\0')
	{
		write(1, &st[k], 1);
		k++;
	}
	p = '\n';
	write(1, &p, 1);
}
