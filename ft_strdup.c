/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:57:56 by jogomes           #+#    #+#             */
/*   Updated: 2018/09/13 19:02:22 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	int	len;
	int i;
	char *ptr;

	len = 0;
	while (s1[len])
		len++;

	ptr = (char *) malloc(sizeof(*ptr) * (len + 1));

	i = 0;
	
	while (i <= len)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}

