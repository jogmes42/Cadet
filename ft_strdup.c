/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:57:56 by jogomes           #+#    #+#             */
/*   Updated: 2018/09/26 12:52:33 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = 0;
	while (s1[len])
		len++;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i <= len)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
