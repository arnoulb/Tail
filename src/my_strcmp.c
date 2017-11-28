/*
** strcmp.c for strcmp in /home/cuny_a/rendu/colle1
**
** Made by Adelin Cuny
** Login   <cuny_a@epitech.net>
**
** Started on  Wed Apr 27 16:06:15 2016 Adelin Cuny
** Last update Wed Apr 27 16:59:41 2016 ARNOULD Jean-Michel
*/

#include "function.h"

int	my_strcmp(char *str1, char *str2)
{
  int	a;

  a = 0;
  if (my_strlen(str1) != my_strlen(str2))
    return (0);
  while (str1[a] != '\0' && str2[a] != '\0')
    {
      if (str1[a] != str2[a])
	return (0);
      a++;
    }
  return (1);
}
