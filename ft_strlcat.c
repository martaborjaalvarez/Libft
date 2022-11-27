/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:27:38 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/22 22:24:03 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	if (i < dstsize)
	{
		while (*src && j++ < dstsize - i - 1)
		{	
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (src_len + i);
}
int main(void)
{
    char    dst[220] = "Hello ";
    char    src[] = "World";

    printf("%lu\n", strlcat(dst, src, 99));
    printf("%zu\n", ft_strlcat(dst, src, 99));
    printf("%s\n", dst);
    return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}

/*int main(void)
{
    char	dst[220] = "Hello ";
    char	src[] = "World";

    printf("%lu\n", strlcat(dst, src, 99));
    printf("%zu\n", ft_strlcat(dst, src, 99));
    printf("%s\n", dst);
    return (0);
}*/
