NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

HDDIRS	=	-I

SRC		=	*.c

OBJ		=	${SRC:.c=.o}

$(NAME):	libft.h
	gcc $(CFLAGS) -c $(SRC) $(HDDIRS) ./
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
