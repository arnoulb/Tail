/*
** my_getnbr.c for  in /home/daelomin/rendu/colle/CPE_colle_semaine1
**
** Made by ARNOULD Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Wed Apr 27 15:50:48 2016 ARNOULD Jean-Michel
** Last update Wed Apr 27 15:59:17 2016 ARNOULD Jean-Michel
*/

#include <stdio.h>

int	my_getnbr(char *str)
{
  int	i;
  int	res;

  res = 0;
  i = -1;
  while (str[++i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  res += str[i] - '0';
	  res *= 10;
	}
      else
	return (-1);
    }
  return (res / 10);
}
