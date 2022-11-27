/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:27:35 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/22 22:41:36 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	i = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	if (p_src > p_dst)
	{		
		while (i < len)
		{
		p_dst[i] = p_src[i];
		i++;
		}	
	}	
	else
	{	
		while (i != len)
		{
		p_dst[len - i - 1] = p_src[len - i - 1];
		i++;
		}
	}	
	return (dst);
}
