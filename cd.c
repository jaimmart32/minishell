/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:03:47 by bbeltran          #+#    #+#             */
/*   Updated: 2023/07/31 18:10:20 by bbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_cd(t_lexer *node)
{
	if (node->next)
	{
		if (chdir(node->next->data) == -1)
			printf("Error: %s", strerror(errno));
	}
}
