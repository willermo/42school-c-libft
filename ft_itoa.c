/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:36:30 by doriani           #+#    #+#             */
/*   Updated: 2023/04/04 19:16:15 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str;
	while (*(end + 1))
		end++;
	while (end > start)
		ft_swap(start++, end--);
	return (str);
}

static int	get_buffer_size(int n)
{
	int	size;

	size = 1;
	if (n == 0)
		return (2);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		sign = -1;
	str = malloc(sizeof(char) * get_buffer_size(n));
	if (!str)
		return (NULL);
	while (n / 10 != 0)
	{
		str[i++] = (sign * n) % 10 + '0';
		n /= 10;
	}
	str[i++] = (sign * n) % 10 + '0';
	if (sign == -1 && i != 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}
