/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:14:03 by jajin             #+#    #+#             */
/*   Updated: 2023/09/25 17:42:05 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long long n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*tostring(int *n, char *str, int *dig, long long *numb)
{
	int	c;

	c = *dig;
	str[c] = '\0';
	c--;
	while (c >= 0)
	{
		str[c] = *numb % 10 + '0';
		*numb /= 10;
		c--;
	}
	if (*n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long long	numb;
	char		*str;
	int			i;
	int			dig;

	i = 0;
	numb = n;
	if (n < 0)
	{
		numb *= -1;
		i++;
	}
	dig = ft_intlen(numb) + i;
	str = (char *)malloc(sizeof(char) * (dig + 1));
	if (str == NULL)
		return (NULL);
	str = tostring(&n, str, &dig, &numb);
	return (str);
}
