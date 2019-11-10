/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:20:17 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 19:20:19 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	ft_c_mult(t_complex a, t_complex b)
{
	t_complex temp;

	temp.re = a.re * b.re - a.im * b.im;
	temp.im = a.im * b.re + b.im * a.re;
	return (temp);
}
