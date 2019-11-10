/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_sum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:18:24 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 19:18:55 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	ft_c_sum(t_complex a, t_complex b)
{
	t_complex temp;

	temp.re = a.re + b.re;
	temp.im = a.im + b.im;
	return (temp);
}
