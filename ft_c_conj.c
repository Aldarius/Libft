/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_conj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:29:27 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 19:33:06 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	ft_c_conj(t_complex num)
{
	t_complex temp;

	temp = ft_c_set(0, 0);
	if (num.re && num.im)
	{
		temp.re = num.re / (num.re * num.re + num.im * num.im);
		temp.im = -num.im / (num.re * num.re + num.im * num.im);
	}
	return (temp);
}
