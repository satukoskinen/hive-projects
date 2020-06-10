/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:03:40 by skoskine          #+#    #+#             */
/*   Updated: 2020/06/10 14:29:41 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/len.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == c)
			return (&s[s_len]);
		s_len--;
	}
	return (NULL);
}
