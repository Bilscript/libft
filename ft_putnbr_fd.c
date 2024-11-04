/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:33:13 by bhamani           #+#    #+#             */
/*   Updated: 2024/11/03 14:33:13 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
			return ;
		}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd ('-', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
		ft_putchar_fd (n + '0', fd);
}

#include <fcntl.h> // Pour les descripteurs de fichiers
#include <unistd.h> // Pour write
#include "libft.h" // Inclure votre bibliothèque

int main() {
    // Test de la fonction ft_putnbr_fd avec différents nombres
    int fd = 1; // Utilisation de la sortie standard (stdout)
    
    ft_putnbr_fd(42, fd);            // Devrait afficher "42"
    write(fd, "\n", 1);              // Saut de ligne

    ft_putnbr_fd(-42, fd);           // Devrait afficher "-42"
    write(fd, "\n", 1);              // Saut de ligne
    
	ft_putnbr_fd(0, fd);             // Devrait afficher "0"
    write(fd, "\n", 1);              // Saut de ligne
    
	ft_putnbr_fd(2147483647, fd);    // Devrait afficher "2147483647"
    write(fd, "\n", 1);              // Saut de ligne
    
	ft_putnbr_fd(-2147483648, fd);   // Devrait afficher "-2147483648"
    write(fd, "\n", 1);              // Saut de ligne

    return 0;
}
