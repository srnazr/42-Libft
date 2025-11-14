/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaarour <szaarour@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:42:16 by szaarour          #+#    #+#             */
/*   Updated: 2025/11/13 21:42:16 by szaarour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (i < num)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
