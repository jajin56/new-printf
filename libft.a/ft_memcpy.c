/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:10:18 by jajin             #+#    #+#             */
/*   Updated: 2023/09/25 14:04:02 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function for copying memory

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_src = (char *) src;
	char_dest = (char *) dest;
	if (!char_dest && !char_src)
	{
		return (NULL);
	}
	i = 0;
	if (char_dest != char_src)
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "copy this";
	char dest[100];

	memcpy(dest, src, strlen(src) + 1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}*/
