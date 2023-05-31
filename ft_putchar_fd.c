#include  "libft.h"

/*Envía el carácter ’c’ al file descriptor especificado.*/
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
