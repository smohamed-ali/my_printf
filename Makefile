##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## bonjour
##

SRC	=	checkflag.c	\
		printf.c	\
		my_putstr.c	\
		my_putchar.c	\
		my_ptab.c	\
		my_putzero.c	\
		my_putnbru.c	\
		my_putnbrb.c	\
		my_putgs.c	\
		my_putnbr.c	\
		flag_mod.c	\
		flag_b.c	\
		flag_c.c	\
		flag_d.c	\
		flag_i.c	\
		flag_o.c	\
		flag_s.c	\
		flag_u.c	\
		flag_x.c	\
		flag_gx.c	\
		flag_p.c	\
		flag_gs.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME) clean

$(NAME): $(OBJ)
#		cd lib/my/ && make
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~
	rm -f *vgcore
#	cd lib/my/ && make clean
#	find . -name "#*#" -delete -or -name "*~" -delete

fclean: clean
	rm -f $(NAME)
#	cd lib/my/ && make fclean
	find . -name "#*#" -delete -or -name "*~" -delete

re : fclean all
