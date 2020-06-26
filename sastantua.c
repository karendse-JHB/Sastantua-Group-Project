/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karendse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:53:33 by karendse          #+#    #+#             */
/*   Updated: 2020/06/26 16:56:55 by karendse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	level(int height, int width)
{
	int i;
	int j;

	i = 0;
	while(i < height)
	{
		j = 0;
		while(j < width)
		{
			write(1, "*\n", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int height;
	int width;

	height = 4;
	width = 1;
	while(i < size)
	{
		level(width, height);
		i++;
	}
}

int	main()
{
	sastantua(3);
	return(0);
}
