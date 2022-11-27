/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:55:49 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/26 21:59:38 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (((char *) s) + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (((char *) s) + i);
	return (NULL);
}

/*int	main(void)
{
	char	*string = "hola";
	char	*string2 = "hola";
	
	printf("%s\n", ft_strchr(string, '\0'));
	printf("%s\n", strchr(string2, '\0'));
	return(0);
}*/
