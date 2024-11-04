/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:45:15 by bhamani           #+#    #+#             */
/*   Updated: 2024/10/14 19:45:15 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	j;

	i = ft_strlen(str);
	if (c == '\0')
	{
		return (&str[i]);
	}
	while (i > -1)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
