/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:49:38 by jajin             #+#    #+#             */
/*   Updated: 2023/09/25 13:44:47 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	return (i >= 32 && i <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	c = 'a';

	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
}
*/
