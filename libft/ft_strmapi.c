/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:16:34 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/09 12:14:08 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_len;
	char			*res;

	if (!s)
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	res = malloc(sizeof(char) * (str_len + 1));
	if (!res)
		return (NULL);
	while (i < str_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
