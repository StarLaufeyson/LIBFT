/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:38:50 by eluno-la          #+#    #+#             */
/*   Updated: 2023/05/12 14:52:59 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 32
# endif

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/* libc */
int				ft_isalnum(int c);
// Declaración de la función isalpha
int				ft_isalpha(int c);
int				ft_isascii(int c);
// Declaración de la función isdigit
int				ft_isdigit(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t			ft_strlcat(char *dest, const char *src, size_t destsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

#endif	// LIBFT_H