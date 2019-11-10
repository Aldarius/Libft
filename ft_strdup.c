/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:52:37 by lminta            #+#    #+#             */
/*   Updated: 2019/04/09 14:23:20 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		len;

	len = 0;
	while (*(src + len))
		len++;
	if (!(copy = (char *)malloc(sizeof(*copy) * (len + 1))))
		return (0);
	while (len >= 0)
	{
		*(copy + len) = *(src + len);
		len--;
	}
	return (copy);
}
