/*
** tool.c for tool in /home/cuny_a/rendu/CPE_colle_semaine1
**
** Made by Adelin Cuny
** Login   <cuny_a@epitech.net>
**
** Started on  Wed Apr 27 15:25:12 2016 Adelin Cuny
** Last update Wed Apr 27 22:22:56 2016 ARNOULD Jean-Michel
*/

#include        <unistd.h>
#include	"function.h"

int	my_strlen(char *str)
{
  int i;

  i = -1;
  while (str[++i]);
  return (i);
}

char	*my_strcat(char *str, char str2)
{
  char	*out;
  int	i;

  i = -1;
  out = malloc(sizeof (char) * my_strlen(str) + 2);
  while (str[++i])
    out[i] = str[i];
  out[i++] = str2;
  out[i++] = 0;
  free (str);
  return (out);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a++;
    }
}

int	get_nb_arg(int	ac, char **av)
{
  int	nb;
  int	i;

  i = 0;
  nb = 0;
  while (++i < ac)
    {
      if (!is_flag(av[i]))
	++nb;
    }
  return (nb);
}
