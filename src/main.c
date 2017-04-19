/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:26:48 by rcargou           #+#    #+#             */
/*   Updated: 2017/04/19 18:19:28 by rcargou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strace.h>

int main(int ac, char **av)
{
	char path[1024];

	if (get_complete_path(path, av[1]) == 1)
		printf("%s\n", path);
	else
		printf("mdr\n");
	return (0);
}

