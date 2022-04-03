/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:44:42 by jefernan          #+#    #+#             */
/*   Updated: 2022/04/03 23:14:21 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int					pid;
	struct sigaction	sa;

	pid = ft_atoi(argv[1]);
	if (argc != 3 || pid < 0)
		write (1, "Error. Use: ./client PID MESSAGE\n", 34);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_handler = server_response;
	if (sigaction(SIGUSR1, &sa, NULL) < 0 || sigaction(SIGUSR2, &sa, NULL) < 0)
		return (1);
	send_char(pid, argv[2]);
	return (0);
}

void	send_char(int pid, char *string)
{
	while (*string)
	{
		send_bit(pid, *string);
		string++;
	}
	send_bit(pid, '\0');
}

void	send_bit(int pid, int c)
{
	int	bit;
	int	send;

	bit = 0;
	while (bit < 8)
	{
		send = c & (128 >> bit);
		if (send)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(10000);
	}
}

void	server_response(int sig)
{
	if (sig == SIGUSR2)
		return ;
	ft_printf("Received");
	exit (0);
}
