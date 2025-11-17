/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_letters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:15:55 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:15:56 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_a_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'A')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" █████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("███████║");
	node->lines[3] = ft_strdup("██╔══██║");
	node->lines[4] = ft_strdup("██║  ██║");
	node->lines[5] = ft_strdup("╚═╝  ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_b_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'B')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("██████╔╝");
	node->lines[3] = ft_strdup("██╔══██╗");
	node->lines[4] = ft_strdup("██████╔╝");
	node->lines[5] = ft_strdup("╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*letters_parser(char letter)
{
	if (letter == 'A')
		return (node_a_(letter));
	else if (letter == 'B')
		return (node_b_(letter));
	else if (letter >= 'C' && letter <= 'F')
		return (node_c_to_f(letter));
	else if (letter >= 'G' && letter <= 'J')
		return (node_g_to_j(letter));
	else if (letter >= 'K' && letter <= 'N')
		return (node_k_to_n(letter));
	else if (letter >= 'O' && letter <= 'R')
		return (node_o_to_r(letter));
	else if (letter >= 'S' && letter <= 'V')
		return (node_s_to_v(letter));
	else if (letter >= 'W' && letter <= 'Z')
		return (node_w_to_z(letter));
	return (NULL);
}

t_font_dict	*append_letters(t_font_dict *head)
{
	t_font_dict	*node;
	char		letter;

	letter = 'A';
	while (letter <= 'Z')
	{
		node = letters_parser(letter);
		if (!node)
			return (NULL);
		node->next = head;
		head = node;
		letter++;
	}
	return (head);
}
