/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimmart32 <jaimmart32@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:24:58 by bbeltran          #+#    #+#             */
/*   Updated: 2023/08/07 14:31:54 by jaimmart32       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
#include "struct.h"
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include "Libft/libft.h"

void	minishell_exe(t_shell *mini);
void	ft_pwd(void);
/*		parser			*/
void	ft_parsing(t_shell *mini, char *rd);
/*		t_basic			*/
t_basic	**create_basic_lst(char *rd);
void	ft_basic_insert(t_basic	**lst, char *content);
/*		list_utils		*/
t_lexer	**create_lexer(t_basic **basic);
t_lexer	*ft_lexernew(char *content, int i);
void	ft_lexer_insert(t_lexer	**lst, char *content, int i);
/*      redirections        */
t_basic	**redirec_separate(t_basic **closed_q);
/*		typesort		*/
void	def_type(t_lexer **lst);
/*		typesort_utils		*/
int		flag_or_envar(char *content);
int		is_file(char *content);
/*		free_utils		*/
void	free_2D_array(char **array);
void	free_list(t_lexer **lst);
/*		echo			*/
void	ft_echo(t_lexer *node, t_shell *mini);
/*		cd				*/
void	ft_cd(t_lexer *node);
/*		env				*/
void	ft_env(char **envp);
/*		unset			*/
int		array_size(char **envp, char *desired_path);
char	**ft_unset(char **envp, t_lexer *node);
/*		export			*/
char	**ft_export(char **envp, t_lexer *node);
/*		builtins		*/
void	call_builtins(t_lexer *node, char **envp, t_shell *mini);
/*		path_utils		*/
int		search_in_envar(char *search, char **envars);
char	**get_paths(char *pathname);
char	*expand_envar(char *data, t_shell *mini);
char	**copy_envp(char **envp);
/*		quotes		*/
char	*separate_quotes(char *rd);
char	*handle_quotes(char	*rd, size_t	*i);
/*		quote_utils		*/
int		quote_type(char c);
/*		quote_clean		*/
void	clean_quotes(t_lexer **lex);
char	*split_quote_sens(char *data, size_t *i);
#endif
