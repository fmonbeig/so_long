/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:35:07 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/08/02 16:15:30 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void display_line(char *line, t_game *g)
{
    static int i = 0;
    int j;
    int x;
    
    i++;
    x = 1;
    j = -1;
    while(line[++j])
    {
        if (line[j] == '1')
        mlx_put_image_to_window(g->mlx, g->win, g->wall->img, 40*x, 40*i);
        else if (line[j] == '0')
        mlx_put_image_to_window(g->mlx, g->win, g->floor->img, 40*x, 40*i);
        else if (line[j] == 'P')
        mlx_put_image_to_window(g->mlx, g->win, g->player->img, 40*x, 40*i);
        else if (line[j] == 'C')
        mlx_put_image_to_window(g->mlx, g->win, g->collec->img, 40*x, 40*i);
        else if (line[j] == 'E')
        mlx_put_image_to_window(g->mlx, g->win, g->exit->img, 40*x, 40*i);
        x++;
    }
}


void display_map(char *map_file, t_game *g)
{
    int ret;
    int fd;
    char *line;
    
    fd = open(map_file, O_RDONLY);
    if (fd < 0)
        ft_putstr_fd("Error :\nBad file descriptor.\n", 2);
    ret = 1;
    while(ret)
    {
        ret = get_next_line(fd, &line);
        if(ret == -1)
            exit(1);
        display_line(line,g);
        free(line);
        line = NULL;
    }
    close (fd);
}
