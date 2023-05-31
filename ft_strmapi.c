#include    "libft.h"

/*A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros 
el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva 
string con el resultado del uso sucesivo de ’f’*/
char    *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    unsigned int    length;
    char            *result;

    length = 0;
    while (s[length] != '\0')
        length++;
    result = (char *)malloc((length + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    unsigned int    i;
    
    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

/*char my_func(unsigned int index, char c)
{
    // Ejemplo de función que convierte caracteres a mayúsculas
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int main(void)
{
    char input[] = "Hello, World!";
    char *result = ft_strmapi(input, &my_func);

    if (result == NULL) {
        printf("Error: Fallo en la reserva de memoria.\n");
        return 1;
    }

    printf("Cadena original: %s\n", input);
    printf("Cadena procesada: %s\n", result);

    free(result);

    return 0;
}*/
