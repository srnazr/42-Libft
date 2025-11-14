/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 00:16:06 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/14 00:16:06 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp1;
	char	*tmp2;

	i = 0;
	tmp1 = (char *) little;
	tmp2 = (char *) big;
	if (tmp1[0] == '\0')
		return (tmp2);
	while (i < len && tmp2[i] != '\0')
	{
		if (tmp2[i] == tmp1[0])
		{
			j = 0;
			while (i + j < len && tmp2[i + j] == tmp1[j])
			{
				if (tmp1[j + 1] == '\0')
					return (tmp2 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
