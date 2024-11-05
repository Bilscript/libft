/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:36:42 by bhamani           #+#    #+#             */
/*   Updated: 2024/11/05 11:00:16 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnbr(int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*itoa(int nb)
{
	int		len;
	int		i;
	char	*res;

	len = ft_countnbr(nb);
	if (nb < 0)
	{
		res = malloc((len + 2) * sizeof (char));
		res[0] = '-';
		if (nb == -2147483648)
			res = "-2147483647";
		else
		nb = -nb;
		len++;
	}
	else
		res = malloc((len + 1) * sizeof (char));
	while (nb)
	{
		res[len - i - 1] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	res[len] = '\0';
	return (res);
}

int	main(void)
{
	printf("%s", itoa(11654));
}
