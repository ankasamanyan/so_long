/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:29:45 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/02 16:40:09 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strjoin(char *str1, char *str2)
{
	int		len1;
	int		len2;
	char	*stringy;

	len2 = gnl_strlen(str2);
	len1 = gnl_strlen(str1);
	stringy = gnl_calloc((len1 + len2) + 1);
	if (!stringy)
		return (NULL);
	if (str1)
		gnl_memmove(stringy, str1, len1);
	gnl_memmove(stringy + len1, str2, len2);
	if (str1)
		free(str1);
	return (stringy);
}

void	save_remainder(char *remainder, char **remainder_array, int fd)
{
	char	*stringy;
	int		len;

	len = gnl_strlen(remainder);
	if (len > 0)
	{
		stringy = gnl_calloc(len + 1);
		gnl_memmove(stringy, remainder, len);
		remainder_array[fd] = stringy;
	}
	else
		remainder_array = NULL;
}

char	*get_line(char *str, char **remainder, int fd, char *buffer)
{
	char	*ret_stringy;
	char	*remainder_stringy;
	int		retlen;

	remainder_stringy = (gnl_strchr(str, '\n') + 1);
	save_remainder(remainder_stringy, remainder, fd);
	remainder_stringy[0] = '\0';
	retlen = gnl_strlen(str);
	ret_stringy = gnl_calloc(retlen + 1);
	gnl_memmove(ret_stringy, str, retlen + 1);
	free(str);
	free(buffer);
	return (ret_stringy);
}

char	*free_and_return(char *line, char *buffer)
{
	free (buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*remainder[1024];
	int			bytecount;

	line = NULL;
	buffer = gnl_calloc(BUFFER_SIZE + 1);
	if (remainder[fd])
	{
		line = gnl_strjoin(line, remainder[fd]);
		free (remainder[fd]);
		remainder[fd] = NULL;
		if (gnl_strchr(line, '\n'))
			return (get_line(line, remainder, fd, buffer));
	}
	bytecount = read(fd, buffer, BUFFER_SIZE);
	while (bytecount > 0)
	{
		buffer[bytecount] = '\0';
		line = gnl_strjoin(line, buffer);
		if (gnl_strchr(line, '\n'))
			return (get_line(line, remainder, fd, buffer));
		bytecount = read(fd, buffer, BUFFER_SIZE);
	}
	return (free_and_return(line, buffer));
}
