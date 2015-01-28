/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:00:39 by smignard          #+#    #+#             */
/*   Updated: 2015/01/26 18:27:51 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

typedef struct		*s_chain
{
	struct s_chain	*next;
	char			*data;
}					*t_chain;

#endif
