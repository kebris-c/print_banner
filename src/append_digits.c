/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:15:48 by kebris-c          #+#    #+#             */
/*   Updated: 2025/11/03 12:15:50 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "banner.h"

static t_font_dict	*node_0_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '0')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗ ");
	node->lines[1] = ft_strdup("██╔══███╗");
	node->lines[2] = ft_strdup("██║ █╔██║");
	node->lines[3] = ft_strdup("██║█╔╝██║");
	node->lines[4] = ft_strdup("╚██████╔╝");
	node->lines[5] = ft_strdup(" ╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_1_(char digit)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (digit != '1')
		return (NULL);
	node->ch = digit;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!node->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██╗ ");
	node->lines[1] = ft_strdup("███║ ");
	node->lines[2] = ft_strdup("╚██║ ");
	node->lines[3] = ft_strdup(" ██║ ");
	node->lines[4] = ft_strdup("████╗");
	node->lines[5] = ft_strdup("╚═══╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*digits_parser(char digit)
{
	if (digit == '0')
		return (node_0_(digit));
	else if (digit == '1')
		return (node_1_(digit));
	else if (digit >= '2' && digit <= '5')
		return (node_2_to_5(digit));
	else if (digit >= '6' && digit <= '9')
		return (node_6_to_9(digit));
	return (NULL);
}

t_font_dict	*append_digits(t_font_dict *head)
{
	t_font_dict	*node;
	char		digit;

	digit = '0';
	while (digit <= '9')
	{
		node = digits_parser(digit);
		if (!node)
			return (NULL);
		node->next = head;
		head = node;
		digit++;
	}
	return (head);
}
