/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:35:01 by jajin             #+#    #+#             */
/*   Updated: 2023/09/22 21:30:09 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}

/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char c;
	c = 'a';
	
	printf("%d", isdigit(c));
	return 0;
}
*/
