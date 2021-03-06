/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 14:46:26 by smignard          #+#    #+#             */
/*   Updated: 2015/02/26 16:24:28 by smignard         ###   ########.fr       */
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
	int poss;

	i = 0;
	midd = 0;
	while(chain = chaine->next)
	{
		// chercher chiffre le plus grand
		//if (chain > chain->next)
		//	poss = chain;
		//chain = chain->next;
			
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

void		ft_remplissage(char *str, t_chain *pile_a)
{
	t_chain		*pile_a;
	static t_chain		*begin_list_a;

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

int	main(int argc, char **argv)
{
	int		i;
	t_chain	*pile_a;

	i = 0;
	t_chain = NULL
	while (i++ < argc)
		ft_remplissage(argv[i], pile_a);
	return (0);
}
