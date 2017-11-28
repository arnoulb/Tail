/*
** handler.c for  in /home/daelomin/rendu/colle/CPE_colle_semaine1
**
** Made by ARNOULD Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Wed Apr 27 16:17:06 2016 ARNOULD Jean-Michel
** Last update Wed Apr 27 18:29:12 2016 ARNOULD Jean-Michel
*/

#include <stdlib.h>
#include "function.h"

char	**readder(char *str)
{
  int	fd;
  int	ret;
  char	buf[2];
  char *res;
  char	**tab;

  res = malloc(sizeof (char) * 2);
  res[0] = 0;
  buf[1] = 0;
  fd = open(str, O_RDONLY);
  if (fd == -1)
    return (NULL);
  while ((ret = read(fd, buf, 1)) != 0)
    {
      if (ret == -1)
	return (NULL);
      res = my_strcat(res, buf[0]);
    }
  tab = split_line(res);
  return (tab);
  close(fd);
}
