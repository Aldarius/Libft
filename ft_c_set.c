/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:14:30 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 19:14:32 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_complex	ft_c_set(long double re, long double im)
{
	t_complex	temp;

	temp.re = re;
	temp.im = im;
	return (temp);
}
