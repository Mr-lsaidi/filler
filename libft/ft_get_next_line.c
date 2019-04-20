/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <lsaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:26:20 by lsaidi            #+#    #+#             */
/*   Updated: 2019/04/09 16:18:25 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static    int        check_str(char **line, char **str, int fd, int ret)
{
    int        i;
    char    *tmp;

    i = 0;
    while (str[fd][i] != '\n' && str[fd][i] != '\0')
        i++;
    if (str[fd][i] == '\n')
    {
        *line = ft_strsub(str[fd], 0, i);
        tmp = ft_strdup(str[fd] + i + 1);
        free(str[fd]);
        str[fd] = tmp;
        if (str[fd][0] == '\0')
            ft_strdel(&str[fd]);
        return (1);
    }
    else if (str[fd][i] == '\0')
    {
        if (ret == BUFF_SIZE)
            return (ft_get_next_line(fd, line));
        *line = ft_strdup(str[fd]);
        ft_strdel(&str[fd]);
    }
    return (0);
}

static int        fill_str(char **str, char *tab, int fd)
{
    char    *tmp;

    tmp = ft_strjoin(str[fd], tab);
    free(str[fd]);
    str[fd] = tmp;
    return (1);
}

static    int        alloc_fd(char **str, int fd)
{
    if (str[fd] == NULL)
    {
        if (!(str[fd] = ft_strnew(1)))
            return (0);
    }
    return (1);
}

int                ft_get_next_line(const int fd, char **line)
{
    int            ret;
    char        tab[BUFF_SIZE + 1];
    static char    *str[4096];

    if (fd < 0 || line == NULL || fd > 4096)
        return (-1);
    if (!alloc_fd(str, fd))
        return (-1);
    while ((ret = read(fd, tab, BUFF_SIZE)) > 0)
    {
        tab[ret] = '\0';
        if (!fill_str(str, tab, fd))
            return (-1);
        if (ft_strchr(tab, '\n'))
            break ;
    }
    if (check_str(line, str, fd, ret) == 1)
        return (1);
    if (ret < 0)
        return (-1);
    if (ret == 0 && *line[0] != '\0')
        return (1);
    return (0);
}