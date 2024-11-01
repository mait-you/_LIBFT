/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:23:02 by mait-you          #+#    #+#             */
/*   Updated: 2024/10/23 11:49:51 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc >= 'a' && cc <= 'z')
		return (cc - ('a' - 'A'));
	return (cc);
}
