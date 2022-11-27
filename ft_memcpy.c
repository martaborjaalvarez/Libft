/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:11:52 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/22 22:26:48 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p_src;
	char	*p_dst;

	p_src = (char *)src;
	p_dst = (char *)dst;
	if (!src && !dst)
		return (NULL);
	while (n--)
	*p_dst++ = *p_src++;
	return (dst);
}

/*int	main(void)
{ 
	char	*hola = NULL;
	char	*bye = NULL;

	printf("   MEMCPY %s\n", memcpy(hola, bye, 7));
	printf("   MY_MEMCPY %s\n", ft_memcpy(hola, bye, 7));
	return (0);
}*/
