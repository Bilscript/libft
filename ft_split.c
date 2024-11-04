/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:50:52 by bhamani           #+#    #+#             */
/*   Updated: 2024/11/02 16:50:52 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_len;
	int		i;

	res = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	res[i] = NULL;
	return (res);
}

/*
int main()
{
    char **result;
    char str[] = "Hello::World::42::School";
    char delimiter = ':';
    int i = 0;

    // Appel de ft_split avec str et le délimiteur ':'
    result = ft_split(str, delimiter);

    // Affichage du résultat
    if (result)
    {
        printf("Résultat de \"%s\" avec '%c' comme set :\n", str, delimiter);
        while (result[i])
        {
            printf("Segment %d : %s\n", i, result[i]);
            i++;
        }
        // Libération de la mémoire
        i = 0;
        while (result[i])
        {
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
    {
        printf("Erreur de split.\n");
    }

    return 0;
}
*/