/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcastil <frcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:49:39 by frcastil          #+#    #+#             */
/*   Updated: 2023/04/26 11:40:55 by frcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char) c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

/* int	main(void)
{
	char	*str;
	char	c;

    c = 'o';
    str = "Hello, World";
	printf("%s", ft_strchr(str, c));
	return (0);
} */