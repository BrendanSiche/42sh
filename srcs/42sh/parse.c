/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 20:28:07 by bsiche            #+#    #+#             */
/*   Updated: 2019/05/03 09:18:54 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh42.h"

int		is_escape(char *str, int i)
{
	if (!str || i == 0)
		return (0);
	if (ft_strlen(str) == 0)
		return (0);
	if (str[i - 1] == '\\' && is_escape(str, i - 1) != 1)
		return (1);
	else
		return (0);
}
