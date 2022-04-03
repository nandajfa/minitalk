/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:45:01 by jefernan          #+#    #+#             */
/*   Updated: 2022/04/03 21:51:49 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _GNU_SOURCE
# define _POSIX_C_SOURCE 199309L

# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

void	signal_handler(int sig, siginfo_t *info, void *context);
void	send_char(int pid, char *string);
void	send_bit(int pid, int c);
void	server_response(int sig);

#endif
