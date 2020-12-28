##
## Makefile for asm in /home/Lookiis/Downloads/CPE_2016_corewar
## 
## Made by Lin David
## Login   <Lookiis@epitech.net>
## 
## Started on  Sat Dec 17 19:23:57 2016 Lin David
## Last update Sun Dec 18 23:37:05 2016 Axel MYRE
##

NAME	=	asm

CFLAGS	=	-W -Wall -Wextra -I./include

SRCS	=	src/asm.c\
		src/function.c\
		src/op.c\
		src/get_next_line.c\
		src/my_convert_bin_to_dec.c\
		src/my_evil_str.c\
		src/my_putchar.c\
		src/my_putstr.c\
		src/my_put_nbr.c\
		src/my_putnbr_baselen.c\
		src/my_strcat.c\
		src/my_strcmp.c\
		src/my_strcpy.c\
		src/my_strlen.c\
		src/my_strncat.c\
		src/my_str_to_wordtab.c\
		src/my_parse_name.c\
		src/my_asm_description.c

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f

all	:	$(NAME) 

$(NAME)	:	$(OBJS)
		gcc -o $(NAME) $(OBJS)
clean	:
		$(RM) $(OBJS) 

fclean	:	clean
		$(RM) $(NAME) libmy.a

re	:	fclean all

.PHONY	:	all fclean clean re
