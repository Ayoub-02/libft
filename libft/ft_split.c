/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-moh <aben-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 00:46:07 by aben-moh          #+#    #+#             */
/*   Updated: 2024/11/13 22:24:59 by aben-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && (s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_split(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count && str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_put_words(char **str, char const *s, char c, int nb)
{
	int	start;
	int	i;
	int	j;

	start = 0;
	i = 0;
	j = 0;
	while (j < nb)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[j] = ft_substr(s, start, i - start);
		if (!str[j])
			return (ft_free_split(str, j));
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (!ft_put_words(res, s, c, ft_count_words(s, c)))
		return (NULL);
	return (res);
}
