/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:18:07 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/04 09:05:12 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (words);
}

static int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i++);
}

static char	*ft_dup(const char *s, int len)
{
	char	*str;
	int		i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*ft_free(char **tab, int stop)
{
	int	i;

	i = 0;
	while (i < stop)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		word;
	int		i;

	if (s == NULL)
		return (NULL);
	word = ft_countwords(s, c);
	tab = (char **)malloc((word + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < word)
	{
		len = ft_wordlen(s, c);
		if (len)
		{
			tab[i] = ft_dup(s, len);
			if (tab[i++] == NULL)
				return (ft_free(tab, i - 1));
		}
		s += len + 1;
	}
	tab[i] = NULL;
	return (tab);
}
