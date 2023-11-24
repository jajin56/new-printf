/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:19:11 by jajin             #+#    #+#             */
/*   Updated: 2023/09/22 21:04:20 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	return (i);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	c;
	c = 'A';

	printf("%d\n", tolower(c));
	printf("%d\n", ft_tolower(c));
}*/
