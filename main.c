/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:59:06 by damachad          #+#    #+#             */
/*   Updated: 2023/05/12 11:30:55 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd = 0;
	char	*line = NULL;

	fd = open("test1.txt", O_RDONLY);
	printf("fd = %d\n", fd);
	if (fd < 0)
	{
		printf("Error: failed to open file\n");
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	if (line == NULL)
	{
		printf("End fo file reached\n");
	}
	close(fd);
	return (0);
}
