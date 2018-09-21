/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:06:42 by jogomes           #+#    #+#             */
/*   Updated: 2018/09/21 11:36:10 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int j)
{
	if (j >= '0' && j <= '9')
		return (1);
	return (0);
}
