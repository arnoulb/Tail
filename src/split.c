/*
** split.c for  in /home/daelomin/rendu/colle/CPE_colle_semaine1
**
** Made by ARNOULD Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Wed Apr 27 17:02:21 2016 ARNOULD Jean-Michel
** Last update Wed Apr 27 22:23:30 2016 ARNOULD Jean-Michel
*/

#include "function.h"

static int	nb_line(char *str)
{
  int	i;
  int	res;

  i = -1;
  res = 0;
  while (str[++i])
    {
      if (str[i] == '\n')
	++res;
    }
  return (res);
}

static int	size_line(char *str)
{
  int	i;

  i = -1;
  while (str[++i] && str[i] != '\n');
  return (i);
}

static char	*get_line(char *str, int line)
{
  int	i;
  char	*res;
  int	j;

  i = -1;
  while (str[++i] && line > 0)
    {
      if (str[i] == '\n')
	--line;
    }
  res = malloc(sizeof (char) * (size_line(&str[i]) + 1));
  j = -1;
  while (str[i] && str[i] != '\n')
    {
      res[++j] = str[i];
      ++i;
    }
  res[j + 1] = 0;
  return (res);
}

char	**split_line(char *str)
{
  char **tab;
  int	size;
  int	i;

  i = -1;
  size = nb_line(str);
  tab = malloc(sizeof (char *) * (size + 2));
  while (++i <= size)
    {
      tab[i] = get_line(str, i);
    }
  tab[i] = 0;
  return (tab);
}
