/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:41:30 by bhamani           #+#    #+#             */
/*   Updated: 2024/10/30 19:41:30 by bhamani          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dsize;
	unsigned int	ssize;
	unsigned int	i;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	if (size <= dsize)
		return (size + ssize);
	i = 0;
	while (src[i] && (dsize + i < size - 1))
	{
		dest[dsize + i] = src[i];
		i++;
	}
	dest[dsize + i] = '\0';
	return (dsize + ssize);
}

/*
int main()
{
	char dest[100] = "cect est un test de la fonction strlcat";
	char *src = "Pour les piscineux francophone !";
	printf("Avant: \n%s\n\n",dest);
	unsigned int result = ft_strlcat(dest, src, 42);
	printf("Apres:\n%s\nDest fait %d caracteres.",dest, result);
}
*/