/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:01:00 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 16:21:04 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	str[s1_len + s2_len] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*res;

	s1 = "Alessia ";
	s2 = "Xiuling";
	printf("%s\n", ft_strjoin(s1, s2));
	
    res = ft_strjoin("", "Xiuling");
    printf("S1 empty: [%s]\n", res);
    free(res);

    res = ft_strjoin("Alessia", "");
    printf("S2 empty: [%s]\n", res);
    free(res);

    res = ft_strjoin("", "");
    printf("both empty: [%s]\n", res); 
    free(res);

    res = ft_strjoin(NULL, "Check");
    if (res == NULL)
        printf("NULL: OK\n");
    else
    {
        printf("NULL: KO\n");
        free(res);
    }

    return (0);
}*/
