/*
** header.c for header in /home/cuny_a/rendu/CPE_colle_semaine1
**
** Made by Adelin Cuny
** Login   <cuny_a@epitech.net>
**
** Started on  Wed Apr 27 15:29:40 2016 Adelin Cuny
** Last update Wed Apr 27 17:41:40 2016 ARNOULD Jean-Michel
*/

#include	"function.h"

void	header(char *av)
{
  my_putstr("==> ");
  my_putstr(av);
  my_putstr(" <==");
  my_putchar('\n');
}
