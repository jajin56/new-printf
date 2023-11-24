/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:40:22 by jajin             #+#    #+#             */
/*   Updated: 2023/09/25 13:47:43 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function for changing memory

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[11] = "Hello World";

	ft_memset(str, 'N', 5);
	printf("%s\n", str);
	memset(str, '!', 5);
	printf("%s", str);
}*/
