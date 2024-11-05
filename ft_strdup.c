/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:38:18 by bhamani           #+#    #+#             */
/*   Updated: 2024/10/12 17:38:18 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof (char) * (size = ft_strlen(s) + 1));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
