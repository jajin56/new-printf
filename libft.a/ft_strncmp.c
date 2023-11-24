/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajin <jajin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:01:09 by james             #+#    #+#             */
/*   Updated: 2023/09/25 15:11:57 by jajin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "hello";
    unsigned int n = 6;

    int result1 = ft_strncmp(str1, str2, n);
    int result2 = strncmp(str1, str2, n);

    printf("ft_strncmp result: %d\n", result1);
    printf("strncmp result: %d\n", result2);

    return (0);
}*/
