/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:25:42 by jogomes           #+#    #+#             */
/*   Updated: 2018/09/19 17:13:16 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char* dst, char *src, int len)
{
	int i;

	i = 0;

	while (src[i] && i < len)
	{
		dst[i] = src[i];
			i++;
	}

	while (i != len)
	{
		dst[i] = '\0';
		i++;
	}

	return (dst);
}
