/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_banner.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:35:54 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 17:11:59 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"
/* ex:
	██████╗ ██╗   ██╗███████╗██╗  ██╗       ███████╗██╗    ██╗ █████╗ ██████╗
	██╔══██╗██║   ██║██╔════╝██║  ██║       ██╔════╝██║    ██║██╔══██╗██╔══██╗
	██████╔╝██║   ██║███████╗███████║       ███████╗██║ █╗ ██║███████║██████╔╝
	██╔═══╝ ██║   ██║╚════██║██╔══██║       ╚════██║██║███╗██║██╔══██║██╔═══╝
	██║     ╚██████╔╝███████║██║  ██║██████╗███████║╚███╔███╔╝██║  ██║██║
	╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚═════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝
*/

static t_font_dict	*find_ch(t_font_dict *dict, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	while (dict)
	{
		if (dict->ch == c)
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}

static void	print_font(const char *text)
{
	t_font_dict	*dict;
	t_font_dict	*node;
	t_font_dict	*owl;
	int			i;
	int			line;

	dict = create_font_dict();
	if (!dict)
		return ;
	owl = node_owl_();
	if (!owl)
		return ;
	line = 0;
	while (line++ < 6)
	{
		ft_printf(YELLOW "%s " CYAN, owl->lines[line - 1]);
		i = 0;
		while (text[i])
		{
			node = find_ch(dict, text[i++]);
			if (node)
				ft_printf("%s ", node->lines[line - 1]);
			else
				ft_printf("      ");
		}
		ft_printf("\n");
	}
	free_font_dict(dict);
}

void	print_banner(const char *text)
{
	ft_printf(CYAN BG_MAGENTA "\n");
	ft_printf("By: " YELLOW BOLD UNDERLINE "kebris-c\n\n" RESET);
	ft_printf(CYAN BOLD BG_MAGENTA);
	print_font(text);
}
