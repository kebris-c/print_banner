#include "banner.h"

static t_font_dict	*node_k_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'K')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗  ██╗");
	node->lines[1] = ft_strdup("██║ ██╔╝");
	node->lines[2] = ft_strdup("█████╔╝ ");
	node->lines[3] = ft_strdup("██╔═██╗ ");
	node->lines[4] = ft_strdup("██║  ██╗");
	node->lines[5] = ft_strdup("╚═╝  ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_l_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'L')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("██╗     ");
	node->lines[1] = ft_strdup("██║     ");
	node->lines[2] = ft_strdup("██║     ");
	node->lines[3] = ft_strdup("██║     ");
	node->lines[4] = ft_strdup("███████╗");
	node->lines[5] = ft_strdup("╚══════╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_m_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'M')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███╗   ███╗");
	node->lines[1] = ft_strdup("████╗ ████║");
	node->lines[2] = ft_strdup("██╔████╔██║");
	node->lines[3] = ft_strdup("██║╚██╔╝██║");
	node->lines[4] = ft_strdup("██║ ╚═╝ ██║");
	node->lines[5] = ft_strdup("╚═╝     ╚═╝");
	node->next = NULL;
	return (node);
}

static t_font_dict	*node_n_(char letter)
{
	t_font_dict	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (letter != 'N')
		return (NULL);
	node->ch = letter;
	node->lines = malloc(sizeof(*node->lines) * 6);
	if (!nodes->lines)
		return (free(node), NULL);
	node->lines[0] = ft_strdup("███╗   ██╗");
	node->lines[1] = ft_strdup("████╗  ██║");
	node->lines[2] = ft_strdup("██╔██╗ ██║");
	node->lines[3] = ft_strdup("██║╚██╗██║");
	node->lines[4] = ft_strdup("██║ ╚████║");
	node->lines[5] = ft_strdup("╚═╝  ╚═══╝");
	node->next = NULL;
	return (node);
}

t_font_dict	*node_k_to_n(char letter)
{
	if (letter == 'K')
		return (node_k_(letter));
	else if (letter == 'L')
		return (node_l_(letter));
	else if (letter == 'M')
		return (node_m_(letter));
	else if (letter == 'N')
		return (node_n_(letter));
	return (NULL);
}