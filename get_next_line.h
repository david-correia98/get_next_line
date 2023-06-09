/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:11:20 by damachad          #+#    #+#             */
/*   Updated: 2023/05/19 14:08:36 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*remain_text(char *text);
char	*ft_get_line(char *text);
char	*ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_read(int fd, char *read_line);

#endif
