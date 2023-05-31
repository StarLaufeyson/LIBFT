#include  "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

void ft_putstr(unsigned int i, char *s)
{
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(void)
{
	char *str = "supercalifristico";

	ft_striteri(str, &ft_putstr);
	return (0);
}
