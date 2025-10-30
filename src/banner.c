/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:35:54 by kebris-c          #+#    #+#             */
/*   Updated: 2025/10/30 15:12:54 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/include/libft.h"

#define RESET	"\x1b[0m"
#define CYAN	"\x1b[36m"
#define GREEN	"\x1b[32m"
#define YELLOW	"\x1b[33m"

typedef struct	s_font_dict
{
	char				letter;
	char				*lines[6];
	struct s_font_dict	*next;
}	t_font_dict;

static t_font_dict	*init_font_dict(void)
{
	t_font_dict	*dict;
	char		c;

	dict = malloc(sizeof(*dict));
	if (!dict)
		return (NULL);
	c = 'A';
	while (c++ <= 'Z')
		dict->letter = c - 1;
	return (dict);
}

static t_font_char	*get_font(t_font_dict *dict, char c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
		c -= 32;
	i = 0;
	while (dict->map[i].c)
	{
		if (dict->map[i].c == c)
			return (&dict->map[i]);
		i++;
	}
	return (NULL);
}

static void	alter_font(t_font_dict *dict, char *str)
{
	t_font_char	*ch;
	int			line;
	int			i;

	line = 0;
	while (line < 6)
	{
		i = 0;
		ft_printf("%s", CYAN);
		while (str[i])
		{
			ch = get_font(dict, str[i]);
			if (ch && ch->lines[line])
				ft_printf("%s  ", ch->lines[line]);
			else
				ft_printf("       ");
			i++;
		}
		ft_printf("%s\n", RESET);
		line++;
	}
}

/*
	ft_printf("██████╗ ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗\n");
	ft_printf("██╔══██╗██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗\n");
	ft_printf("██████╔╝██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝\n");
	ft_printf("██╔═══╝ ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝\n");
	ft_printf("██║     ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║\n");
	ft_printf("╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝════╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝\n");
*/
static void	print_banner(void)
{
	t_font_dict	*dict;

	dict = init_font_dict();
	if (!dict)
		return ;
	alter_font(dict, "push_swap");
	free_font_dict(dict);
	ft_printf(GREEN "");
	ft_printf("                       ,_,\n");
	ft_printf("                      (O,O)\n");
	ft_printf("                      (   )\n");
	ft_printf("                      -\"-\"-\n");
	ft_printf(CYAN "");
	ft_printf("-------------------------------------------------\n");
	ft_printf("------------------");
	ft_printf(YELLOW " ");
	ft_printf("by kebris-c");
	ft_printf(CYAN " ");
	ft_printf("------------------\n");
	ft_printf("-----------------------");
	ft_printf(" 🦉 ");
	ft_printf("----------------------");
	ft_printf(RESET "\n");
}

int	main(void)
{
	print_banner();
	return (EXIT_SUCCESS);
}
