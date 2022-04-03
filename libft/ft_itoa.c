/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:11:27 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/02 12:57:00 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i++;
		n = -1 * n;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		count;
	char	*str;

	count = ft_count(n);
	num = (long)n;
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)ft_calloc((count + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	count--;
	while (num != 0 && count >= 0)
	{
		str[count--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
