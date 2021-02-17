/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <odh0112@naver.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:26:32 by gashin            #+#    #+#             */
/*   Updated: 2021/02/16 12:41:08 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	line_split(char **line, char **backup)
{
	char	*tmp1;
	char	*tmp2;

	if ((tmp1 = ft_strchr(*backup, '\n')))
	{
		*line = ft_substr(*backup, 0, tmp1 - *backup);
		tmp2 = ft_strdup(tmp1 + 1);
		free(*backup);
		*backup = tmp2;
	}
	else
	{
		*line = ft_strdup(*backup);
		free(*backup);
		*backup = NULL;
		return (0);
	}
	return (1);
}

int	return_value(int fd, int read_size, char **line, char **backup)
{
	if (read_size < 0)
		return (-1);
	else if (read_size == 0 && !*backup[fd])
	{
		free(backup[fd]);
		*line = ft_strdup("");
		return (0);
	}
	else
		return (line_split(line, &backup[fd]));
}

int	get_next_line(int fd, char **line)
{
	static char	*backup[256];       // 왜 256으로 했을까
	char		buf[BUFFER_SIZE + 1]; // 파일을 read 할 임시 버퍼
	char		*tmp; // 개행을 찾기위한 변수
	int			read_size;

	read_size = 0;
	if (fd < 0 || fd >= 256 || line == NULL || BUFFER_SIZE < 1)
		return (-1);
	if (backup[fd] == NULL)
		backup[fd] = ft_strdup("");  // 이렇게 안해주면 segmentation fault 발생
	while (!ft_strchr(backup[fd], '\n')     // -> 저장된 값 중 개행이 없고, 읽어온 바이트 수가 0보다 클 때 버퍼에 데이터를 저장함
			&& (read_size = read(fd, buf, BUFFER_SIZE)) > 0)  // BUFFER_SIZE만큼씩 읽으며너 진행
	{
		buf[read_size] = '\0';
		tmp = ft_strjoin(backup[fd], buf);
		free(backup[fd]);
		backup[fd] = tmp;
	}
	return (return_value(fd, read_size, line, backup));  // 데이터를 다 읽어서 read_size == 0일떄, 남은 데이터 처리
}
