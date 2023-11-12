/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:04:01 by yaharkat          #+#    #+#             */
/*   Updated: 2023/11/12 04:30:19 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}
	i = 0;
	while (i < 81)
	{
		line = get_next_line(fd);
		printf("Line %d: %s", i + 1, line);
		i++;
		free(line);
	}
	return (0);
}

// int	main(void)
// {
//     int fd;
//     char *line;
//     int i;

//     fd = 0;
//     i = 0;
//     line = get_next_line(fd);
//     while (line && i < 2)
//     {
//         printf("Line %d: %s\n", i + 1, line);
//         i++;
//         free(line);
//         line = get_next_line(fd);
//     }
// 	free(line);
//     return (0);
// }