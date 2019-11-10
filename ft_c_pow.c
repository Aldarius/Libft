/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_pow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:13:56 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 19:13:57 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	ft_c_pow(t_complex a, int n)
{
	t_complex	temp;
	int			i;

	i = 0;
	temp.re = 1;
	temp.im = 0;
	if (n < 0)
	{
		a = ft_c_conj(a);
		n = -n;
	}
	while (i < n)
	{
		temp = ft_c_mult(temp, a);
		i++;
	}
	return (temp);
}
