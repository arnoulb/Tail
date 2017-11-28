##
## Makefile for  in /home/arnoul_b/projet/gitlab/tail
## 
## Made by ARNOULD Jean-Michel
## Login   <arnoul_b@epitech.net>
## 
## Started on  Sun May  1 22:24:38 2016 ARNOULD Jean-Michel
## Last update Sun May  1 22:24:48 2016 ARNOULD Jean-Michel
##

NAME		:=	tail

CC		:=	gcc
RM		:= 	rm -f

SRC_DIR		:= 	src
OBJ_DIR		:=	obj
INC_DIR		:=	inc

CFLAGS		:=	-Wextra -Wall -Werror -ansi -pedantic
CFLAGS		+=	-I$(INC_DIR)


SRC		:=	main.c\
			header.c\
			tool.c\
			my_getnbr.c\
			my_strcmp.c\
			handler.c\
			split.c



SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ		:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))


$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c -o $@ $<

all:			$(NAME)


$(NAME): 		$(OBJ2) $(OBJ)
			$(CC) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)
			$(RM) $(SRC_DIR)/*~
			$(RM) $(OBJ_DIR)/*~
			$(RM) $(INC_DIR)/*~
			$(RM) *~
			$(RM) $(SRC_DIR)/*\#
			$(RM) $(OBJ_DIR)/*\#
			$(RM) $(INC_DIR)/*\#
			$(RM) *\#

fclean: 		clean
			$(RM) $(NAME)
			$(RM) $(NAME2)

re:			fclean all

.PHONY: 		all clean fclean re
