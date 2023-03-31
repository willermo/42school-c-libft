/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:54:48 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 12:48:07 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*runner;

	runner = (char *) s;
	while (*runner)
		runner++;
	while (runner >= s)
	{
		if (*runner == c)
			return (runner);
		runner--;
	}
	return (NULL);
}
