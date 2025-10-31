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
	t_font_dict	*tmp;
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

	ft_bzero(head, sizeof(*head));
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