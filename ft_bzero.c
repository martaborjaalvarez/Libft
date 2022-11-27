/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:23:31 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/22 22:25:34 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = 0;
	}
}

/*int	main(void)
{
	char str[] = "GeeksForGeeks is for programming geeks";

	ft_bzero(str, 20);
	printf("%s\n", str);
	return (0);
}*/
