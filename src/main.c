/*
** main.c for main in /home/cuny_a/rendu/CPE_colle_semaine1
**
** Made by Adelin Cuny
** Login   <cuny_a@epitech.net>
**
** Started on  Wed Apr 27 15:05:13 2016 Adelin Cuny
** Last update Sun May  1 22:23:05 2016 ARNOULD Jean-Michel
*/

#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int	len_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i]);
  return (i);
}

void	gestion(char **tab, t_data *data, char *name)
{
  int	i;

  i = -1;
  if (data->verbose && !data->quiet)
    header(name);
  while (tab[++i])
    {
      if (len_tab(tab) - data->lines <= i)
	{
	  my_putstr(tab[i]);
	  my_putstr((tab[i + 1] == NULL) ? "" : "\n");
	}
    }
}

int	is_flag(char *str)
{
  if ((my_strcmp("-c", str)
       || my_strcmp("-n", str)
       || my_strcmp("-v", str) || my_strcmp("--verbose", str)
       || my_strcmp("-q", str) || my_strcmp("--quiet", str)
       || my_strcmp("silent", str)) || my_getnbr(str) !=  -1)
    return (1);
  else
    return (0);
}

void	get_flags(int ac, char **av, t_data *data)
{
  int	i;

  i = 0;
  data->lines = 10;
  data->verbose = (get_nb_arg(ac, av) > 1) ? 1 : 0;
  data->quiet = 0;
  data->bytes = -2;
  while (++i < ac)
    {
      if (my_strcmp("-c", av[i]) && av[i + 1])
	data->bytes = my_getnbr(av[i + 1]);
      if (my_strcmp("-n", av[i]) && av[i + 1])
	data->lines = my_getnbr(av[i + 1]);
      if (my_strcmp("-v", av[i]) || my_strcmp("--verbose", av[i]))
	{
	  data->verbose = 1;
	  data->quiet = 0;
	}
      if (my_strcmp("-q", av[i]) || my_strcmp("--quiet", av[i])
	  || my_strcmp("silent", av[i]))
	{
	  data->quiet = 1;
	  data->verbose = 0;
	}
    }
}

int	main(int ac, char **av)
{
  int		i;
  t_data	data;
  char		**tab;

  i = 0;
  get_flags(ac, av, &data);
  while (++i < ac)
    {
      if (!is_flag(av[i]))
	tab = readder(av[i]);
      if (tab != NULL && !is_flag(av[i]))
	{
	  gestion(tab, &data, av[i]);
	  my_putstr((i + 1 >= ac && data.quiet != 0) ? "" : "\n");
	}
      if (tab == NULL)
      	{
	  my_putstr("tail: impossible d'ouvrir '");
	  my_putstr(av[i]);
	  my_putstr("' en lecture\n");
	  return (42);
	}
    }
  return (0);
}
