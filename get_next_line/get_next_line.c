/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:37:22 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/26 12:09:21 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
	* create static linked list (record) to stock each buffer in a new node
	* check if error in reading fd
	* read buffer
	* stock the read return value (n.characters read)
	  in order to use it to malloc the right size for the node->content
	* stock each buffer in a new node
	* add new node to last of the linked list (or make it first node)
	* copy new node content into *line
	* check if it contains \n => eol (end of line) and step out
	  once copied the line until \n (included)
	* stock the characters after the \n in a temp node
	* free the entire static linked list
	* temp node becomes the new first node of the linked list (for the next call)
	* check if the new *line touch the end of contents (\0)
	* => if yes free everything and return NULL
	* => if no return the *line => string made of all the nodes->content
	* Start over the process
*/

#include "get_next_line.h"

static void	read_stock(t_list **record, int fd);
static void	compose_line(char **line, t_list *record);
static void	clean_record(t_list **record);
static void	ft_free_list(t_list *record);

char	*get_next_line(int fd)
{
	static t_list	*record;
	char			*line;

	line = NULL;
	if (fd == -1 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
	{
		ft_free_list(record);
		record = NULL;
		return (NULL);
	}
	read_stock(&record, fd);
	if (!record)
		return (NULL);
	compose_line(&line, record);
	clean_record(&record);
	if (line[0] == '\0')
	{
		ft_free_list(record);
		record = NULL;
		free(line);
		return (NULL);
	}
	return (line);
}

static void	read_stock(t_list **record, int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	int		characters;

	characters = 1;
	while (check_eol(*record) == 0 && characters != 0)
	{
		characters = read(fd, buffer, BUFFER_SIZE);
		if (characters == -1 || ((*record) == NULL && characters == 0))
		{
			buffer[0] = '\0';
			return ;
		}
		buffer[characters] = '\0';
		ft_add_pattern(record, buffer, characters);
	}
}

static void	compose_line(char **line, t_list *record)
{
	int		i;
	int		j;

	j = 0;
	*line = malloc(sizeof(char) * (ft_line_size(record) + 1));
	if (!*line || !record)
		return ;
	while (record)
	{
		i = 0;
		while (record->content[i])
		{
			if (record->content[i] == '\n')
			{
				(*line)[j++] = record->content[i];
				break ;
			}
			(*line)[j++] = record->content[i++];
		}
		record = record->next;
	}
	(*line)[j] = '\0';
}

static void	clean_record(t_list **record)
{
	t_list	*last;
	t_list	*temp;
	int		i;
	int		t;

	i = 0;
	t = 0;
	temp = malloc(sizeof(*temp));
	if (!temp || (!*record))
		return ;
	temp->next = NULL;
	last = ft_lstlast(*record);
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last->content[i] && last->content[i] == '\n')
		i++;
	temp->content = malloc(sizeof(char) * ((ft_strlen(last->content) - i) + 1));
	if (!temp->content)
		return ;
	while (last->content[i])
		temp->content[t++] = last->content[i++];
	temp->content[t] = '\0';
	ft_free_list(*record);
	*record = temp;
}

static void	ft_free_list(t_list *record)
{
	t_list	*current;
	t_list	*following;

	current = record;
	while (current)
	{
		free(current->content);
		following = current->next;
		free(current);
		current = following;
	}
}
