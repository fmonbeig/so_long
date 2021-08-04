/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 12:23:07 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/08/04 11:55:17 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void error_map()
{
  ft_putstr_fd("Error :\n Bad Map Format \n", 2);
  exit(1);
}

void error_malloc()
{
  ft_putstr_fd("Error :\n Malloc Failed \n", 2);
  exit(1);
}

void error_name()
{
  ft_putstr_fd("Error :\n Bad Map Extension \n", 2);
  exit(1);
}

void error_taille()
{
  ft_putstr_fd("Error :\n Width must be at 2560 and Height at 1440 MAX\n", 2);
  exit(1);
}