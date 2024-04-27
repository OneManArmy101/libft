/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:15:12 by almarti3          #+#    #+#             */
/*   Updated: 2024/03/24 17:15:13 by almarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_digitos(int nb)
{
	int		cont;

	cont = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb /= 10;
		cont++;
	}
	return (cont);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		nb_t;
	int		nb_rest;
	int		cont;
	char	c[10];

	nb_t = n;
	cont = cont_digitos(n);
	while (cont > 0)
	{
		nb_rest = nb_t % 10;
		nb_t /= 10;
		if (n > 0)
			c[cont - 1] = '0' + nb_rest;
		else
			c[cont - 1] = '0' - nb_rest;
		cont--;
	}
	if (n < 0)
		write(fd, "-", 1);
	write(fd, c, cont_digitos(n));
}

/*
int main(void)
{
	ft_putnbr_fd(-125, 1);
    return 0;
}
*/
