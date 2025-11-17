/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_font_dict.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:16:02 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 16:47:51 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_hyphen_(char symbol)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (symbol != '-')
		return (NULL);
	node->ch = symbol;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("      ");
	node->lines[1] = ft_strdup("      ");
	node->lines[2] = ft_strdup("█████╗");
	node->lines[3] = ft_strdup("╚════╝");
	node->lines[4] = ft_strdup("      ");
	node->lines[5] = ft_strdup("      ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_underscore_(char symbol)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (symbol != '_')
		return (NULL);
	node->ch = symbol;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("       ");
	node->lines[1] = ft_strdup("       ");
	node->lines[2] = ft_strdup("       ");
	node->lines[3] = ft_strdup("       ");
	node->lines[4] = ft_strdup("██████╗");
	node->lines[5] = ft_strdup("╚═════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*append_symbols(t_font_dict *head)
{
	t_font_dict	*node;
	char		symbol;

	symbol = '-';
	node = node_hyphen_(symbol);
	if (!node)
		return (NULL);
	node->next = head;
	head = node;
	symbol = '_';
	node = node_underscore_(symbol);
	if (!node)
		return (NULL);
	node->next = head;
	head = node;
	return (head);
}

t_font_dict	*create_font_dict(void)
{
	t_font_dict	*head;

	head = NULL;
	head = append_symbols(head);
	if (!head)
		return (NULL);
	head = append_digits(head);
	if (!head)
		return (NULL);
	head = append_letters(head);
	if (!head)
		return (NULL);
	return (head);
}
