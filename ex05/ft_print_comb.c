/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoysal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:47:56 by tsoysal           #+#    #+#             */
/*   Updated: 2021/11/25 18:25:21 by tsoysal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	fdigit;
	char	sdigit;
	char	ldigit;

	fdigit = '0';
	while (fdigit <= '7')
	{
		sdigit = fdigit + 1;
		while (sdigit <= '8')
		{
			ldigit = sdigit + 1;
			while (ldigit <= '9')
			{
				ft_putchar(fdigit);
				ft_putchar(sdigit);
				ft_putchar(ldigit);
				if (!(fdigit == '7' && sdigit == '8' && ldigit == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ldigit++;
			}
			sdigit++;
		}
		fdigit++;
	}
}
