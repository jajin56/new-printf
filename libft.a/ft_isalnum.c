/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:37:14 by jajin             #+#    #+#             */
/*   Updated: 2023/09/22 21:27:54 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}

/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char c;
	c = 'a';
	
	printf("%d", ft_isalnum(c));
	return 0;
}
*/
