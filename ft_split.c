/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:48:49 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/26 21:58:04 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && (s[i]))
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_length(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

void	ft_free(char **res, int j)
{
	while (j-- > 0)
		free (res[j]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;	
	size_t	size;
	char	**res;

	i = 0;
	j = -1;
	count = ft_count_words(s, c);
	if (!(res = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	while (++j < count)
	{
		while (s[i] == c)
			i++;
		size = ft_word_length(s, c, i);
		if (!(res[j] = (ft_substr(s, i, size))))
		{
			ft_free(res, j);
			return (NULL);
		}
		i += size;
	}
	res[j] = 0;
	return (res);
}*/	

/*int	main(void)
{
	char	s[10] = "abssdcabd";

	printf("%s\n", **ft_split(s, 'c'));
	return (0);
}*/

#include <stdlib.h>

static int	unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
			&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == charset || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == charset || str[i + j] == '\0') == 0)
				j++;
			split[word] = ((char *)malloc(sizeof(char *) * (j + 1)));
			if (split[word] == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	res = ((char **)malloc(sizeof(char *) * (words + 1)));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
