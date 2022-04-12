/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:38:34 by jefernan          #+#    #+#             */
/*   Updated: 2022/04/12 14:36:49 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int					pid;
	struct sigaction	sa;

	pid = getpid();
	sa.sa_sigaction = signal_handler;
	sa.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa, NULL) < 0 || sigaction(SIGUSR2, &sa, NULL) < 0)
		return (1);
	ft_printf("PID: %d\n", pid);
	while (1)
		pause ();
	return (0);
}

void	signal_handler(int sig, siginfo_t *info, void *context)
{
	static int	bit;
	static int	character;
	int			pid;

	context = (void *)context;
	pid = info->si_pid;
	if (!bit)
		bit = 128;
	if (sig == SIGUSR1)
		character += bit;
	bit /= 2;
	if (!bit)
	{
		write(1, &character, 1);
		if (character == '\0')
		{
			write(1, "\n", 1);
			kill(pid, SIGUSR1);
		}
		character = 0;
	}
	kill(pid, SIGUSR2);
}
