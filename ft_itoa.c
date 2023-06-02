#include  "libft.h"

static  int ft_length(int num)
{
  int length;
  
  length = i;
  while (num / 10 != 0)
  {
    length++;
    num = num / 10;
  }
  if (num < 0)
    length = length + 1;
   return (length);
}

char  *ft_itoa(int n)
{
  char  *str_num;
  int counter;
  int str_length;
  long  num;
  
  num = n;
  str_length = ft_length(num);
  str_num = (char *)malloc(sizeof(char) * (str_length + 1));
  if (!(str_num))
    return (NULL);
  str_num[str_length] = '\0';
  counter = 0;
  if (num < 0)
  {
    str_num[counter] = '-';
    num = -num * -1;
  }
  if (num == 0 )
    str_num[0] = '\0';
  while (num > 0)
  {
    str_num[str_length - counter - 1] = num % 10 + '0';
    num = num / 10;
  }
  return [str_num);
}

int main(void)
{
  int     num;
  int     i;
  char    *result;
  
  num = 123456;
  i = 0;
  result = ft_itoa(num);
  while (result[i])
  {
      write(1, &result[i], 1);
      i++;
  }
  free(result);
  return (0);

}
