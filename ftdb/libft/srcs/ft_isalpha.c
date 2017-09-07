/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:54:53 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 00:54:54 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the character is a letter.
*/

int		ft_isalpha(int c)
{
	return ((c >= 'A' && 'Z' >= c) || (c >= 'a' && 'z' >= c));
}