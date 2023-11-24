/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:08 by jajin             #+#    #+#             */
/*   Updated: 2023/09/22 21:28:03 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	return ((i >= 65 && i <= 90) || (i >= 97 && i <= 122));
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char c;
	c = 'a';
	
	printf("%d", isalpha(c));
	return 0;
}
*/