/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:05:50 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/13 17:00:41 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		str_len;
	long	nbr;
	char	*res;

	nbr = n;
	str_len = nbr_len(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * (str_len + 1));
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	res[str_len] = '\0';
	while (nbr > 0)
	{
		res[str_len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		str_len--;
	}
	return (res);
}
