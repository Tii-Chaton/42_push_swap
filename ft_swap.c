/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 15:03:09 by smignard          #+#    #+#             */
/*   Updated: 2015/02/26 19:24:30 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_chaine	*ft_create_elem(char *data)
{
	t_chain		*new;

	if	(new = (t_chain *)malloc(sizeof(t_chain)))
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
void	ft_rra(t_chain	*chaine_a)
{
	 while (chaine_a)
	 {
	 	
	 }
}

void	ft_remplissage(t_chaine *pie_a, char *str)
{
	t_chain     *pile_a;
	static t_chain      *begin_list_a;

	if (pile_a = ft_create_elem(str))
	{
		if (begin_list_a == NULL)
			begin_list_a = pile_a;
		else
			while (pile_a->next != NULL)
			{
				pile_a->next = pile_a;
				pile_a = pile_a->next;
			}
		ft_tri(begin_list_a);
	}
}
}

int		main(int argc, char **argv)
{	
	int	i;
	static int val_max;

	i = 0;
	t_chain = NULL;
	while (i++ < argc)
		ft_remplissage(argv[i], pile_a);
	return (0);
}
