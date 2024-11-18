/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:35:08 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/29 19:02:55 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		src_len;

	src_len = ft_strlen(src);
	temp = (char *)malloc((src_len + 1));
	if (temp == NULL)
		return (0);
	return (ft_strcpy(temp, src));
}

int main() {
    char src[] = "bellasdaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaadssssssssss";
    char *ciao = ft_strdup(src);
    
    if (ciao != NULL) {
        printf("%s\n", ciao);
        free(ciao);
    } else {
        printf("Memory allocation failed\n");
    }
    
    return 0;
}
