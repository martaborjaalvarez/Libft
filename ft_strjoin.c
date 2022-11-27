/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:48:05 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/24 17:44:51 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	i;
	size_t	j;

	sjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (sjoin == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	else
	{
		while (s1[i])
		{
			sjoin[j++] = s1[i++];
		}
	}
	i = 0;
	while (s2[i])
		sjoin[j++] = s2[i++];
	sjoin[j] = '\0';
	return (sjoin);
}

/*int	main(void)
{
	const char	*s;

	s = "1234564676876546";
	printf("%zu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
	return (0);
}*/
