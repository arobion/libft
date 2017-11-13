/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:54:13 by arobion           #+#    #+#             */
/*   Updated: 2017/11/11 12:03:25 by arobion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;

	if (size >= 2147483647)
		return (NULL);
	if (!(str = (unsigned char*)malloc(sizeof(unsigned char) * (size + 1))))
		return (NULL);
	ft_memset(str, 0, size);
	return (&str[0]);
}
