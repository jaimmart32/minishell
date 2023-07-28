/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:45:30 by bbeltran          #+#    #+#             */
/*   Updated: 2023/07/28 17:59:24 by bbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_leaks(void)
{
	system("Leaks a.out");
}

int	main(void)
{
	atexit(ft_leaks);
	minishell_exe();
	return (0);
}

void	minishell_exe(void)
{
	char	*rd;
	char	**words;
	t_lexer	**lst;
	t_lexer	*ptr;

	while (1)
	{
		rd = readline("minishell>");
	
		words = ft_split(rd, ' ');
		lst = create_list(words);
		def_type(lst);
		ptr = *lst;
		while (ptr)
		{
			printf("%s, index: %i, type: %i\n", ptr->data, ptr->index, ptr->type);
			if (ptr->type == VAR)
			{
				ptr->data = expand_envar(ptr->data);
				printf("Changed value: %s\n", ptr->data);
			}
			ptr = ptr->next;
		}
		ptr = NULL;
		if (rd[0] != '\0')
			printf("\n");
		add_history(rd);
//		free(rd);
//		rl_redisplay(); /* idk what this is for*/
		rl_on_new_line();
		if (!ft_strncmp(rd, "exit", ft_strlen(rd)))
		{
			free(rd);
			clear_history();
			free_list(lst);
			exit(0);
//			return ;
		}
	}
}
