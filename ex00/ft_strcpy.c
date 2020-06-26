/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:34:32 by aismail           #+#    #+#             */
/*   Updated: 2020/06/26 11:44:37 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src){

	int i;
	int a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
		i++;
	while (a <= i)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);

}

int main(){

	char des, sc;

	ft_strcpy(&des, &sc);
	return 0;
}
