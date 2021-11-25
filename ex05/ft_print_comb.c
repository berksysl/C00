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

void	ft_print_int(void)
{
	char	fdigit;
	char	sdigit;
	char	ldigit;

	fdigit = 48;
	while (fdigit <= 55)
	{
		sdigit = fdigit + 1;
		while (sdigit <= 56)
		{
			ldigit = sdigit + 1;
			while (ldigit <= 57)
			{
				write(1, &fdigit, 1);
				write(1, &sdigit, 1);
				write(1, &ldigit, 1);
				if (!(fdigit == 55 && sdigit == 56 && ldigit == 57))
					write(1, ", ", 2);
				ldigit++;
			}
			sdigit++;
		}
		fdigit++;
	}
}
