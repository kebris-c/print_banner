#include "banner.h"

static t_font_dict	*node_o_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'O')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗ ");
	node->lines[1] = ft_strdup("██╔═══██╗");
	node->lines[2] = ft_strdup("██║   ██║");
	node->lines[3] = ft_strdup("██║   ██║");
	node->lines[4] = ft_strdup("╚██████╔╝");
	node->lines[5] = ft_strdup(" ╚═════╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_p_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'P')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("██████╔╝");
	node->lines[3] = ft_strdup("██╔═══╝ ");
	node->lines[4] = ft_strdup("██║     ");
	node->lines[5] = ft_strdup("╚═╝     ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_q_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'Q')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup(" ██████╗ ");
	node->lines[1] = ft_strdup("██╔═══██╗");
	node->lines[2] = ft_strdup("██║   ██║");
	node->lines[3] = ft_strdup("██║▄▄ ██║");
	node->lines[4] = ft_strdup("╚██████╔╝");
	node->lines[5] = ft_strdup(" ╚══▀▀═╝ ");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_r_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'R')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██████╗ ");
	node->lines[1] = ft_strdup("██╔══██╗");
	node->lines[2] = ft_strdup("██████╔╝");
	node->lines[3] = ft_strdup("██╔══██╗");
	node->lines[4] = ft_strdup("██║  ██║");
	node->lines[5] = ft_strdup("╚═╝  ╚═╝");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_o_to_r(char letter)
{
	if (letter == 'O')
		return (node_o_(letter));
	else if (letter == 'P')
		return (node_p_(letter));
	else if (letter == 'Q')
		return (node_q_(letter));
	else if (letter == 'R')
		return (node_r_(letter));
	return (NULL);
}