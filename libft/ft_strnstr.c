/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:12:25 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/09 01:11:40 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' 
			&& i + j < len)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *) haystack + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
