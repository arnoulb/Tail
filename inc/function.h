/*
** function.h for  in /home/cuny_a/rendu/CPE_colle_semaine1
**
** Made by Adelin Cuny
** Login   <cuny_a@epitech.net>
**
** Started on  Wed Apr 27 15:35:46 2016 Adelin Cuny
** Last update Sun May  1 22:19:41 2016 ARNOULD Jean-Michel
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_data
{
  int	bytes;
  int	lines;
  int	verbose;
  int	quiet;
}		t_data;

void	header(char *);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strcmp(char *, char *);
int	my_getnbr(char *);
char	**readder(char *);
int	my_strlen(char *);
char	*my_strcat(char *, char);
char	**split_line(char *);
int	get_nb_arg(int ac, char **av);
int	is_flag(char *);
#endif
