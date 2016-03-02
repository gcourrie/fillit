#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:16:15 by gcourrie          #+#    #+#              #
#    Updated: 2016/02/18 21:51:45 by gcourrie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=		fillit

SRC_PATH=		./sources/

OBJ_PATH=		./objects/

LIB_NAME=		libft/libft.a

SRC_NAME=		main.c \
				fillitform1.c \
				fillitform2.c \
				fillitform3.c \
				fillitform4.c \
				ft_check_form.c \
				algo1.c \
				algo.c \
				clear_form_1.c \
				clear_form_2.c \
				clear_form_3.c \
				clear_form_4.c \
				creat_form_1.c \
				creat_form_2.c \
				creat_form_3.c \
				creat_form_4.c \
				creat_map.c \
				creat_and_clear_form.c

INC_PATH=		./includes/

CFLAGS	=		-Wall -Wextra -Werror

GCC		=		gcc

OBJ_NAME=		$(SRC_NAME:.c=.o)

SRC		=		$(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ		=		$(addprefix $(OBJ_PATH),$(OBJ_NAME))

INC		=		$(addprefix -I,$(INC_PATH))

all:			$(NAME)

$(NAME):		$(OBJ)
				cd libft; $(MAKE) -f Makefile
				$(GCC) $(CFLAGS) $(INC) -o $(NAME) $(LIB_NAME) $(OBJ)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
				@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
				$(GCC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
				rm -vf $(OBJ)
				@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
				rm -rvf libft/objects

fclean:			clean
				rm -vf $(NAME)
				rm -vf libft/libft.a

re:				fclean all

.PHONY:			all clean fclean re