/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digcount.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/28 17:29:51 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/29 17:26:50 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_digcount(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
