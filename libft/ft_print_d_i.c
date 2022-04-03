/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:47:31 by jefernan          #+#    #+#             */
/*   Updated: 2021/12/09 17:06:05 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_d_i(int nbr)
{
	char	*str;
	int		len;

	if (nbr == 0)
		return (write(1, "0", 1));
	len = 0;
	str = ft_itoa(nbr);
	len += write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
