/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:13:52 by jogomes           #+#    #+#             */
/*   Updated: 2018/09/12 17:18:28 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char* s, int c)
{

	while (*s != '\0' && *s != char c)
		s++;
	if (*s != char c)
		return (NULL);
	else
		return (char c);
}	

