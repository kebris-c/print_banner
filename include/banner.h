/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banner.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:17:45 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/17 19:09:15 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANNER_H
# define BANNER_H

# include "libft/include/libft.h"
# include "colors.h"
# include <sys/ioctl.h>

typedef struct s_font_dict
{
	char				ch;
	char				**lines;
	struct s_font_dict	*next;
}	t_font_dict;

typedef struct s_width
{
	int	curr;
	int	term;
	int	chr;
}	t_width;

void		ft_banner(const char *str);
void		free_font_dict(t_font_dict *dict);

t_font_dict	*new_font_node(char c, char **lines);
t_font_dict	*create_font_dict(void);

t_font_dict	*append_digits(t_font_dict *head);
t_font_dict	*node_2_to_5(char digit);
t_font_dict	*node_6_to_9(char digit);

t_font_dict	*append_letters(t_font_dict *head);
t_font_dict	*node_c_to_f(char letter);
t_font_dict	*node_g_to_j(char letter);
t_font_dict	*node_k_to_n(char letter);
t_font_dict	*node_o_to_r(char letter);
t_font_dict	*node_s_to_v(char letter);
t_font_dict	*node_w_to_z(char letter);

t_font_dict	*node_owl_(void);

#endif
