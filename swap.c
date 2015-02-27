/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 17:11:00 by smignard          #+#    #+#             */
/*   Updated: 2015/02/26 15:02:26 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_create_elem(char *pile_a)
{
	char *pile_b;

	pile_b = (pile_a *)malloc(sizeof(pile_a));

}

void	ft_moitie(char *pile_a)
{
	static int fin_a;
	int moitie;
	int static  nbel;


	cmp = 0;
	while (pile_a[fin_a] != '\0')
	{
		if (pile_a[fin_a] > pile_a[fin_a +1])
			 nbel = pile_a[fin_a];
		fin_a++;
	}
	moitie === fin_a / 2;
}

int		ft_rra(char *pile_a)
{
	int	cmp;

	cmp = 0;
	while (pile_a[cmp] != '\0')
	{
		if (nbel != cmp)
		{
			pile_a[0] == pile_a[fin_a];
			cmp++;
		}
		cmp++;
	}
		 return (0);
}
int		ft_ra(char *pile_a)
{
	int cmp;

	cmp = 0;
	while (pile_a[cmp] != '\0')
		if (nbel != cmp)
			{
				pile_a[fin_a] == pile_a[0];
				cmp++;
			}
	return (0);
}
