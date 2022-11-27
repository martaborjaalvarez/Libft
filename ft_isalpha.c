/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborja-a <mborja-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:25:40 by mborja-a          #+#    #+#             */
/*   Updated: 2022/11/22 22:25:52 by mborja-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
 	unsigned char	test;

	test = 'A';

	ft_isalpha(test);
	printf("%d", ft_isalpha(test));
	return (0);
}*/
