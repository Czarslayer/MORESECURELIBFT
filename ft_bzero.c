/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:26:34 by mabahani          #+#    #+#             */
/*   Updated: 2022/10/29 17:36:17 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if(!s)
		return(NULL);//already protected from empty string fuck SIG ;)
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i++] = 0;
	}
}
