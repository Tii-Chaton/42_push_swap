/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 14:46:26 by smignard          #+#    #+#             */
/*   Updated: 2015/01/28 12:10:54 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_chain		*ft_create_elem(char *data)
{
	t_chain		*new;

	if (new = (t_chain *)malloc(sizeof(t_chain)))
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

void		ft_tri(t_chain *chaine_a, t_chain *chaine_b, begin_list)
{
	int i;
	int midd;

	i = 0;
	midd = 0;
	while(chain = chaine->next)
	{
		i++;
		chain = chain->next;
	}
	begin_list = chain;
	while(midd < (i / 2))
	{
		midd++;
		chain = chain->next;
	}
}

void		ft_remplissage(char *str)
{
	t_chain		*pile_a;
	t_chain		*pile_b;
	static t_chain		*begin_list_a;
	static t_chain		*begin_list_b;

	if (pile_a = ft_create_elem(str) && pile_b = ft_create_elem(NULL))
	{
		if (begin_list_a == NULL && begin_list_b == NULL)
		{
			begin_list_a = pile_a;
			begin_list_b = pile_b;
		}
		else
			while (pile_a->next != NULL)
			{
				pile_a->next = pile_a;
				pile_a = pile_a->next;
			}
		ft_tri(begin_list_a, begin_list_b);
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (i++ < argc)
		ft_remplissage(argv[i]);
	return (0);
}
