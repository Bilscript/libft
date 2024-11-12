/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:36:42 by bhamani           #+#    #+#             */
/*   Updated: 2024/11/12 05:51:14 by bhamani          ###   ########.fr       */
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
	if (nb < 0)
		len++;
	return (len);
}

char	*check_limit(int nb)
{
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	return (0);
}

char	*ft_itoa(int nb)
{
	int		len;
	int		i;
	char	*res;

	i = 0;
	len = ft_countnbr(nb);
	res = check_limit(nb);
	if (res)
		return (res);
	res = malloc((len + 2));
	if (!res)
		return (0);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		len++;
	}
	while (nb)
	{
		res[len - i++ - 1] = ((nb % 10) + '0');
		nb /= 10;
	}
	res[len] = '\0';
	return (res);
}

/*
int main()
{
	printf("%s",ft_itoa(-0));
}*/